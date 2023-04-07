# Section1

## C 프로그래밍 개요

- C는 Bell Labs의 Dennis Ritchie가 1970년대 초에 개발한 범용 프로그래밍 언어
- C는 효율성, 유연성 및 이식성으로 유명하여 운영 체제 및 임베디드 시스템에서 데스크탑 응용 프로그램에 이르기까지 다양한 응용 프로그램에 적합

</br>

---

</br>

## 개발 환경 설정

### Windows에서 개발 환경 설정


- `C 컴파일러(MinGW)` 설치:
  - `MinGW` 설치 프로그램 [다운로드](https://osdn.net/projects/mingw/releases/)
  - 설치 프로그램을 `실행`
  - `mingw-get-setup.exe`를 선택한 후 설치 진행
  - 설치가 완료되면 `MinGW 설치 관리자` 열기
  - 설치할 다음 패키지 선택: `mingw32-base`, `mingw32-gcc`, `msys-base` 
  - 각 패키지를 마우스 오른쪽 버튼으로 클릭하고 `설치 표시`를 선택
  - `설치` 메뉴로 이동하여 `변경 사항 적용`을 선택
  - 선택한 패키지가 설치완료

</br>

- MinGW를 `PATH 환경 변수`에 추가:
  - `내 컴퓨터` 또는 `내 PC`를 마우스 오른쪽 버튼으로 클릭하고 "속성"을 선택
  - `고급 시스템 설정` 클릭
  - `환경 변수` 버튼 클릭
  - `시스템 변수`에서 `경로` 변수를 찾아 선택하고 "편집"을 클릭
  - `Path` 변수에 MinGW bin 폴더(보통 C:\MinGW\bin) 경로를 추가 
  - 세미콜론(;)으로 다른 항목과 구분해야 함

</br>

### Mac에서 개발 환경 설정

- `Xcode Command Line Tools` 설치: 
  - macOS에서 C 컴파일러(clang)를 가져오려면 Xcode Command Line Tools을 설치
  - 터미널을 열고 다음 명령을 입력
  ```
  xcode-select --install
  ```


---

</br>

### IDE(통합 개발 환경) 설치

- `Visual Studio Code(VS Code)` 설치:
  - 공식 홈페이지에서 최신 버전의 `VS Code`를 [다운로드](https://code.visualstudio.com/download)
  - 설치 프로그램을 `실행`하고 설치 프로세스에 따라 프로그램 `설치`

</br>

- VS Code용 `C/C++ Extension` 설치:
  - VS Code 열기
  - 창 측면에 있는 작업 표시줄의 사각형 아이콘을 클릭하여 `확장 프로그램` 보기로 이동
  - 검색창에 `C/C++`를 검색
  - 검색 결과에서 `Microsoft의 "C/C++" Extension`을 검색 후 `설치`를 클릭

</br>

---

</br>

## VS Code에서 첫 번째 C 프로그램 만들기


- VS Code를 열고 프로젝트를 위한 새 폴더 생성
- 새 폴더에서 `helloworld.c`라는 새 파일 생성
- `helloworld.c`에 다음 코드를 작성

```
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```
- 파일 저장(Ctrl+S)
- Ctrl+Shift+B를 누르면 `빌드`가 진행 됨
- 동일한 폴더에 실행 파일(`helloworld.exe`)이 생성
- `Ctrl+(백틱)`을 누르거나 메뉴에서 `터미널` > `새 터미널`로 이동 후 VS Code에서 `통합 터미널` 열기
- helloworld.c가 위치한 폴더로 이동 후 터미널에서 .\helloworld(또는 .\helloworld.exe)을 입력하고 `Enter`를 눌러 프로그램을 실행
- 출력에 `"Hello, World!"`가 표시되면 성공
