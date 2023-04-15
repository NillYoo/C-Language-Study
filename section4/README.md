# Section 4

## 함수
- 함수란 특정 기능을 수행하는 코드의 집합 
- 함수를 사용하면 코드의 재사용성과 가독성을 높일 수 있음 

</br>

### 함수의 기본
- 함수 선언: 
  - 함수의 원형(prototype)을 지정 
  - 함수 원형(prototype)은 반환 타입, 함수 이름, 매개변수를 포함 
  - 함수 원형(prototype)은 헤더 파일이나 코드 파일 상단에 위치해야 함
```
int add(int a, int b); // 함수 원형(prototype) 선언
```

- 함수 정의: 
  - 함수 정의는 함수를 구성하는 실제 코드를 제공하는 곳 
  - 함수의 논리를 작성하는 곳
  - 함수의 동작을 구체적으로 작성 
  - 함수 정의에는 반환 타입, 함수 이름, 매개변수, 그리고 함수 본문이 포함

```
int add(int a, int b) { 
    // 함수 정의
    int result = a + b;
    return result;
}
```
  
- 함수 호출: 
  - 프로그램에서 함수를 사용하려면 호출해야 함 
  - 함수가 호출되면 프로그램 실행은 함수 정의로 이동하여 함수 내부의 코드를 실행한 다음 함수가 호출된 지점으로 돌아감
  - 함수 호출 시, 매개변수를 전달할 수 있음

```
int main() {
    int sum = add(3, 4); // 함수 호출
    printf("The sum is %d\n", sum);
    return 0;
}
```

### 함수 매개변수와 반환 값

- 함수는 매개변수를 통해 값을 전달받아 작업을 수행하고, 반환 값을 통해 결과를 전달할 수 있음 
- 함수 선언과 정의에서 매개변수와 반환 값을 지정

```
float calculate_area(float radius); // 함수 원형

float calculate_area(float radius) { // 함수 정의
    float area = 3.14159 * radius * radius;
    return area;
}
```

### 재귀 (Recursion)
- 재귀는 함수가 자기 자신을 호출하는 것
- 재귀를 사용하면 반복문 없이 반복적인 작업을 수행할 수 있음 
- 하지만, 종료 조건이 없거나 제대로 작동하지 않는 경우 무한 루프에 빠질 수 있으므로 주의해야 함

```
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}
```