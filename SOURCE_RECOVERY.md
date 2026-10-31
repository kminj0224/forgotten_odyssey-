# Forgotten Odyssey — 소스코드 복구 현황

이 저장소의 `v4-logfix` 릴리스는 설치용 APK입니다. APK만으로는 원본 Cocos2d-x C++ 개발 프로젝트가 저장소에 올라오지 않습니다.

## APK에서 확인된 항목

- 엔진: 오래된 Cocos2d-x C++ API(`CCDirector`, `CCScene`, `CCLayer` 등) 사용
- 복구 가능한 자료: `assets/` 내부의 이미지·애니메이션·사운드·폰트·설정·게임 데이터 약 1,308개
- `lib/armeabi-v7a/libgame.so`: 컴파일된 ARM용 C++ 게임 로직. 원본 `.cpp`/`.h` 아님
- `classes.dex`: 컴파일된 Android Java 바이트코드
- 네이티브 라이브러리에는 `GameScene`, `MainMenuLayer`, `StageSelect`, `Story_Layer`, `SkillTreeLayer`, `Market_Store` 등 함수/클래스 이름이 남아 있음

## 앞으로 개발하려면

1. 예전에 작성했던 원본 C++ 프로젝트(`.cpp`, `.h`, Android 빌드 파일)를 백업·기존 PC·클라우드·기존 Git 기록에서 먼저 찾기
2. 원본을 찾지 못하면 APK에서 추출한 `assets`를 이용해 Cocos2d-x 프로젝트를 새로 구성하기
3. `libgame.so`에 남은 함수 이름과 실행 동작을 참고해 게임 로직을 재구현하거나 역분석하기
4. 소스코드·리소스는 저장소에, 설치용 APK는 GitHub Releases에 구분해서 관리하기

**주의:** APK를 추출하는 것만으로 원본 전체 소스코드가 복원되지는 않으며, 컴파일된 `.so` 파일만으로 편집 가능한 C++ 게임 프로젝트가 되지는 않습니다.
