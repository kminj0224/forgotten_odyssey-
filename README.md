# Forgotten Odyssey — 수정 작업용 복구 프로젝트

`v4-logfix` APK에서 에셋과 Android 코드를 추출하고, 원래 네이티브 게임 라이브러리를 보존한 개발 작업 공간입니다. **원본 C++ 소스 전체를 되찾은 프로젝트는 아닙니다.**

## 구성

| 위치 | 내용 | 수정 후 APK 반영 |
|---|---|---|
| `apk/assets/` | 원본 이미지·애니메이션·음악·폰트·게임 데이터 1,308개 | 가능 |
| `apk/smali/` | Android DEX 코드 382개 Smali 파일 | 가능 |
| `apk/AndroidManifest.xml`, `apk/res/` | 앱 설정·레이아웃·문자열·아이콘 | 가능 |
| `apk/lib/armeabi-v7a/` | 원본 ARM 32비트 라이브러리 3개 | 기존 실행 로직 보존 |
| `recovered-java/sources/` | JADX로 복구한 Java 참고 파일 155개 | 직접 반영되지 않음; Smali 수정 필요 |
| `recovered-native/` | Ghidra가 복구한 함수별 C 유사 의사코드와 주소 색인 | 참고 자료; 컴파일되는 C++ 아님 |
| `reports/` | 파일별 SHA-256·네이티브 함수 심벌·문자열·ELF 구조 | 분석 자료 |
| `tools/` | 복구·빌드·서명·무결성 검증 도구 | Python 3, Java 17 이상 |

## 수정하고 APK 만들기

```bash
git clone https://github.com/kminj0224/forgotten_odyssey-.git
cd forgotten_odyssey-
# 작업할 브랜치로 전환한 뒤 apk/assets 또는 apk/smali 등을 수정
python3 tools/build.py
```

결과: `dist/signed/forgotten-odyssey-aligned-debugSigned.apk`

빌드 도구는 최초 실행 시 고정 버전을 내려받고 SHA-256을 확인합니다. 별도의 Android SDK나 NDK 없이 원본 Smali와 네이티브 라이브러리를 사용하여 재빌드합니다. 개발용 디버그 키로 서명하므로 원본 서명 APK 위에 업데이트 설치할 수 없습니다. 원본 앱을 지우면 저장 데이터가 함께 지워질 수 있으므로 별도 테스트 기기나 에뮬레이터를 사용하세요.

## 수정 위치와 한계

그림·사운드·대사·데이터는 `apk/assets/`에서 변경합니다. 파일명과 대소문자, 스프라이트 시트의 `.plist` 좌표 및 `.anim` 참조를 함께 유지해야 합니다. 앱 생명주기·입력·음악·JNI 호출은 `apk/smali/org/cocos2dx/`에서 변경하며 `recovered-java`를 읽기 자료로 사용할 수 있습니다.

전투·스킬·상점·스테이지 등 C++ 로직은 `libgame.so`에 컴파일되어 있습니다. Ghidra 의사코드와 `reports/libgame.so.symbols.txt`로 함수를 찾을 수 있지만, 의사코드를 고치는 것만으로 APK가 바뀌지는 않습니다. 해당 로직을 C++에서 자유롭게 빌드하려면 구조·타입·엔진 API와 구현을 수작업으로 복원해야 합니다. 원본 `.cpp`, `.h`, 프로젝트 설정, 서명 키는 APK에 포함되어 있지 않습니다.

이 프로젝트는 원본 ARMv7·구형 OpenGL ES 실행 경로를 유지합니다. ARM 32비트 실행을 지원하는 기기가 필요하며, 최신 Android 호환성 및 실제 게임 동작은 별도 기기 테스트 대상입니다.

## 검증

```bash
# 수정 전 추출 결과를 원본 해시와 비교
python3 tools/verify_recovery.py
# 재빌드 APK 안의 에셋/라이브러리가 원본과 같은지 비교
python3 tools/verify_recovery.py --apk dist/signed/forgotten-odyssey-aligned-debugSigned.apk
```

에셋을 의도적으로 수정했다면 원본 해시 검증은 불일치를 보고하는 것이 정상입니다. 빌드는 매번 ZIP 정렬 및 APK 서명을 검증합니다. GitHub Actions에서도 APK 재빌드 및 원본 리소스 검사를 수행하고 결과를 아티팩트로 제공합니다.

원본 APK SHA-256: `4b252471fb40745e2880d5af5301fc578d17ca891ea378f1ea4b5f78aba28c1a`
