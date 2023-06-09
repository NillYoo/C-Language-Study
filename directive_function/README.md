# 지시문과 함수


## `#include`
- C프로그래밍의 전처리기 지시문
- 컴파일 과정에서 현재 파일의 소스 코드에 다른 파일의 내용을 포함하는 데 사용
- 코드를 컴파일 하기 전에 지정된 파일의 내용을 현재 파일에 "복사하여 붙여넣기" 하도록 컴파일러에 지시
- 컴파일 프로세스 중에 한 파일의 내용을 다른 파일에 포함하는 데 사용되며, 이를 통해 프로그램의 외부 파일에서 함수, 매크로 및 기타 선언을 사용할 수 있음

### *Note

: `#include` 지시문의 일반적인 2가지 사용법은?

- 시스템 헤더 파일(라이브러리) 포함: 
  - 이러한 헤더 파일은 C 표준 라이브러리 또는 운영 체제 라이브러리의 일부임
  - 꺽쇠 괄호 `<>` 로 둘러싸여 있음, 예를 들면 `<stdio.h>`, `<stdlib.h>` 및 `<string.h>` 등

</br>

- 사용자 정의 헤더 파일 포함:
  - 사용자 정의 헤더파일은 특정 프로젝트 또는 개발자가 생성
  - 큰 따옴표로 `""` 로 둘러싸여 있음, 예를 들면 `"headerfilename.h"`와 같음
  - 사용자 정의 헤더파일을 사용하면 컴파일러는 현재 디렉터리 또는 다른 경로에서 지정된 헤더파일을 검색함

</br>

---

</br>

## `stdio.h`
- C 표준 라이브러리의 헤더 파일
- `표준 입력/출력 헤더` 로써 입력 및 출력 작업을 수행하기 위한 함수, 매크로, 타입들이 포함 되어 있음

</br>

### 제공하는 기능

- `printf()`: 
  - 이 함수는 텍스트를 콘솔에 `출력` 하는 데 사용
  - 메시지, 변수 값, 또는 기타 텍스트를 화면에 표시 할 수 있음

</br>

아래와 같이 코드를 입력 후 실행하면 `Hello World` 라는 텍스트가 출력 됨 
```
printf("Hello World\n");
```

</br>

- `scanf()`:
  - 이 함수는 콘솔에 텍스트를 `입력` 받고 읽어 오는 데 사용 됨
  
</br>

아래와 같이 사용 할 수 있음
```
int level;
printf("Enter Your level: ");
scanf("%d", &level);
```

</br>

- `fopen()`: 
  - fopen()은 파일 `열기`에 사용되는 C 표준 라이브러리의 함수
  - fopen()을 사용할 때 `파일 이름(또는 경로)`과 `파일을 여는 모드`를 제공해야 함 
  - 이 함수는 읽기 또는 쓰기와 같은 다양한 파일 작업을 수행하는 데 사용할 수 있는 `FILE` 구조에 대한 포인터를 반환 함

</br>

아래와 같이 사용 할 수 있음
```
FILE *fopen(const char *filename, const char *mode);
```

</br>

파라미터(Parameters) 설명:
- `filename`: 열려는 파일의 이름(또는 경로)을 나타내는 문자열
- `mode`: 파일 접근 모드를 나타내는 문자열.
  - `r` : 읽기 모드 – 읽기용으로 파일을 엽니다(파일이 존재해야 함).
  - `w` : 쓰기 모드 – 쓰기를 위해 새 파일을 생성하거나 기존 파일을 덮어씁니다.
  - `a` : 추가 모드 – 쓰기 위해 파일을 열지만 파일을 덮어쓰지 않습니다. 대신 파일의 끝에서 쓰기를 시작합니다(또는 파일이 없으면 새 파일을 만듭니다).
  - `r+` : 읽기 및 쓰기 모드 – 기존 파일을 읽고 쓰기 위해 엽니다.
  - `w+` : 읽기 및 쓰기 모드 – 읽기 및 쓰기를 위해 새 파일을 생성하거나 기존 파일을 덮어씁니다.
  - `a+` : 읽기 및 추가 모드 - 읽기 및 쓰기용으로 파일을 엽니다. 그러나 파일을 덮어쓰지는 않습니다. 대신 파일의 끝에서 쓰기를 시작합니다(또는 파일이 없으면 새 파일을 만듭니다).

</br>

반환값(Return Value):
- `fopen()` returns a pointer to a `FILE` structure if the file is successfully opened. 
- If it fails to open the file, it returns `NULL`.

</br>

코드 예시: 
```
#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
    } else {
        printf("File opened successfully.\n");
        // 여기서 파일 작업을 수행 (예: 파일에서 읽기)
        fclose(file); // 사용을 마친 후에는 파일을 받드시 닫아야함!
    }

    return 0;
}
```
코드 설명: 
> 읽기 모드에서 "example.txt"라는 파일을 열려고 시도</br>
> 파일을 열 수 없으면 오류 메시지가 출력</br>
> 파일이 성공적으로 열리면 성공 메시지를 출력하고 파일을 닫음</br>

</br>

- `fclose()`:
  - `fopen()`을 사용하여 연 파일을 닫는 데 사용되는 C 표준 라이브러리의 함수
  - `파일을 닫는 것`은 파일과 관련된 `리소스를 해제`하고 보류 중인 변경 사항(예: 버퍼링된 쓰기)이 `파일에 제대로 저장`되도록 하기 때문에 `중요`합니다.

</br>

아래와 같이 사용 할 수 있음
```
int fclose(FILE *stream);
```

</br>

파라미터(Parameters) 설명: 
- `stream`: 닫으려는 파일을 나타내는 FILE 구조에 대한 `포인터`
- 일반적으로 `fopen()`을 사용하여 파일을 열 때 얻은 것과 동일한 포인터

</br>

반환값(Return Value):
- 파일 닫기에 성공하면 `0`을 반환 
- 파일 닫기에 실패하면 `EOF(보통 -1인 파일 끝 표시기)`를 반환

코드 예시:

```
#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
    } else {
        printf("File opened successfully.\n");
        // 여기에서 파일 작업 수행(예: 파일에서 읽기)

        // 사용을 마친 후 파일을 닫음
        if (fclose(file) == 0) {
            printf("File closed successfully.\n");
        } else {
            printf("Failed to close the file.\n");
        }
    }

    return 0;
}
```
코드 설명: 
> 먼저 `fopen()`을 사용하여 읽기 모드에서 "example.txt"라는 파일을 연다</br>
> 파일을 열고 필요한 작업을 수행한 후 `fclose()`를 사용하여 파일을 닫음</br>
> 파일이 닫기가 성공하면 성공 메시지를 출력</br> 
> 파일이 닫기가 실패하면 오류 메시지를 출력</br>

</br>

- `fread()`: 
- `fwrite()`:
