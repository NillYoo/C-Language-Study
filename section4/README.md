# Section 4

## 함수

### 함수의 기본
- 선언: 
  - 함수 선언은 컴파일러에게 함수의 이름, 반환 유형 및 매개변수를 알려줌 
  - 선언은 함수 프로토타입이라고도 함
  - 일반적으로 프로그램 시작 부분, 주 함수 앞에 나타남

- 정의: 
  - 함수 정의는 함수를 구성하는 실제 코드를 제공하는 곳 
  - 함수의 논리를 작성하는 곳
  
- 호출: 
  - 프로그램에서 함수를 사용하려면 호출해야 함 
  - 함수가 호출되면 프로그램 실행은 함수 정의로 이동하여 함수 내부의 코드를 실행한 다음 함수가 호출된 지점으로 돌아감

```
#include <stdio.h>

// 함수 선언(프로토타입)
int add(int a, int b);

int main() {
    int num1 = 5, num2 = 7, result;

    // 함수 호출
    result = add(num1, num2);
    printf("The sum of %d and %d is %d.\n", num1, num2, result);

    return 0;
}

// 함수 정의
int add(int a, int b) {
    return a + b;
}
```

