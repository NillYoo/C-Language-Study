# Section2

## 데이터 타입 및 변수

</br>

### `데이터 타입`

- C에서는 작업 중인 `데이터 타입`을 `지정`해야함

</br>

- C의 `주요` 데이터 타입:
  - `int`: 정수(정수)
  - `float`: 부동 소수점 숫자(소수점이 있는 숫자)
  - `double`: 배정밀도 부동 소수점 숫자(float와 비슷하지만 정밀도가 더 높음)
  - `char`: 단일 문자

</br>

- C의 주요 데이터 타입에서 `파생`된 데이터 타입:
  - `long int` 또는 `long`: 
    - `int` 데이터 타입보다 `더 긴 범위의 정수 값`을 나타내는 데 사용 
    - 서명된 것과 서명되지 않은 것 모두 가능 
    - `long int`는 크기가 `32비트 이상`
  
    ```
    long int largeNumber;
    unsigned long int positiveLargeNumber;
    ```

  - `short int` 또는 `short`: 
    - `int` 데이터 타입보다 `작은 범위의 정수 값`을 나타내는 데 사용
    - 서명된 것과 서명되지 않은 것 모두 가능
    - `short int`는 크기가 `16비트 이상`
    ```
    short int smallNumber;
    unsigned short int positiveSmallNumber;
    ```

  - `long double`: 
    - double 데이터 타입보다 `훨씬 더 정밀한 부동 소수점 숫자`를 나타내는 데 사용
    ```
    long double veryPreciseNumber;
    ```

  - `bool`: 
    - bool 값(예: `true` 또는 `false`)을 나타내는 데 사용
    - bool 데이터 타입을 사용하려면 프로그램에 `stdbool.h` 헤더를 포함해야 함
    ```
    #include <stdbool.h>

    bool isTrue;
    ```



### `변수`

- 변수 `생성`:
  - 변수를 생성하려면 `데이터 타입`과 `변수의 이름`을 지정 해야함 
```
int age;
float weight;
double distance;
char letter;
```

</br> 

- 변수 `초기화`:
  - 변수가 선언될 때 `초기 값`을 변수에 `할당`하는 프로세스
```
int level = 21;
float hight = 68.5;
double distance = 124.56;
char grade = 'A';
```

---

</br>

## 기본 산술 연산

- C는 `덧셈`, `뺄셈`, `곱셈`, `나눗셈`과 같은 `기본 산술 연산`을 지원 함
- `두 정수`를 나눌 때 결과는 `정수`가 됩니다(`소수 부분은 잘림`).

```
int a = 10;
int b = 3;
int sum = a + b; // 13
int subtraction = a - b; // 7
int multiplication = a * b; // 30
int divide = a / b; // 3
int remainder = a % b; // 1
```

---

</br>

## printf() 및 scanf()를 사용한 입력 및 출력

</br>

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

### 변수 값을 입력 받고 출력 하는 프로그램 만들어보기

```
#include <stdio.h>

int main() {
    int level;
    
    printf("Enter your Security Level: ");
    scanf("%d", &level);
    
    printf("You are Security Level is %d!\n", level);
    
    return 0;
}
```

코드 분석

> 1. int 데이터 타입에 level이라는 `변수의 이름`을 지정하여 `선언`</br>
> 
> 2. 첫번째 `printf`함수의 경우 값을 입력하라는 텍스트 문구를 `출력`</br>
> 
> 3. `scanf`함수를 사용하여 %d 타입지정자를 통해 정수를 `입력`받고, level 변수에 정수 값을 `저장`(&level은 level 변수의 메모리 주소를 나타냄)
> 
> 4. 두번째 `printf` 함수의 경우 scanf 함수를 통해 입력 받아 level에 저장된 `정수 값`을 텍스트와 함께 `출력`


---