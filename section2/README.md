# Section 2

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

## 타입 캐스팅 (Type Casting)
- 한 데이터 유형에서 다른 데이터 유형으로 값을 `변환`하는 프로세스 
- C와 같은 프로그래밍 언어에서는 특정 작업을 수행하거나 값을 특정 데이터 구조에 저장하기 위해 `서로 다른 데이터 유형 간에 값을 변환`해야 하는 것이 일반적
- 형식 변환을 사용할 때는 주의해야 함
- 제대로 사용하지 않으면 `예기치 않은 결과`나 `데이터 손실`이 발생할 수 있기 때문 
- 대상 데이터 유형이 `변환된 값`을 안전하게 보유할 수 있는지 항상 `확인` 필요



### `암시적` 타입 캐스팅(`자동 타입 변환`):
  - 프로그래머가 명시적으로 변환을 요청하지 않고 `컴파일러`가 한 데이터 타입을 다른 데이터 타입으로 변환할 때 자동으로 발생
  - 일반적으로 `더 작은 데이터 타입`의 값이 `더 큰 데이터 타입`의 변수에 `할당`될 때 발생

```
int i = 5;
double d;

d = i; // 정수 'i'는 'd'에 할당되기 전에 암시적으로 double로 캐스팅 됨.
```

### `명시적` 타입 캐스팅(`수동 타입 변환` 또는 `타입 캐스팅`):
  - `변환할 값 앞에 대상 데이터 유형을 괄호 안에 지정`하여 프로그래머가 명시적으로 유형 변환을 요청하는 경우
  - 명시적 유형 캐스팅의 경우 값이 지정된 데이터 유형으로 변환되고 `대상 데이터 유형에 맞지 않는 추가 정보는 버려짐` 
  - 예를 들어 부동 소수점 숫자를 정수로 캐스팅하면 소수 부분이 제거 됨

```
double d = 5.7;
int i;

i = (int)d; // double 'd'는 'i'에 할당되기 전에 명시적으로 정수로 캐스팅 됨
```

---
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