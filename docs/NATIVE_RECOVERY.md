# 네이티브 로직 작업 안내

`recovered-native/<라이브러리>/functions.tsv`에서 함수 이름과 주소를 검색하고 같은 디렉터리의 주소별 `.c` 파일을 엽니다. 이는 Ghidra의 추정 타입·변수명·제어 흐름으로 작성된 분석용 의사코드입니다. 실패한 함수는 색인 상태에 `failed`로 표시합니다. 자동 분석 성공은 의미가 정확하게 복구되었다는 보장이 아닙니다.

`libgame.so`에는 게임 코드와 엔진 코드가 함께 들어 있습니다. GameScene, MainMenuLayer, StageSelect, Story_Layer, SkillTreeLayer, Market_Store 등의 심벌을 시작점으로 관련 함수를 추적할 수 있습니다. 다른 라이브러리의 역할은 ELF 의존성과 심벌을 함께 확인합니다.

C++ 구현으로 옮길 때는 클래스 멤버 배치와 타입, 가상 함수 테이블, 함수 호출 규약, 전역 데이터, 리소스 참조를 함수별로 확인해야 합니다. 자동 디컴파일 `.c`는 현재 APK 빌드 입력이 아닙니다. 수정 가능한 C++ 원본 전체로 간주하거나 그대로 컴파일하지 마세요.

재분석: Ghidra 10.4/JDK 17을 설치하고 아래 명령을 실행합니다. 출력 폴더는 절대 경로를 사용합니다.

```bash
/path/to/ghidra/support/analyzeHeadless /tmp/odyssey-ghidra Odyssey \
  -import apk/lib/armeabi-v7a/libgame.so \
  -analysisTimeoutPerFile 180 -max-cpu 4 \
  -scriptPath tools/ghidra -postScript ExportRecovered.java /absolute/path/to/recovered-native
```

APK 안의 원본 `.so`를 직접 덮어쓰기 전에 원본 SHA-256을 비교하고 별도 브랜치에서 변경하세요. 원본 라이브러리는 32비트 ARM 전용입니다.
