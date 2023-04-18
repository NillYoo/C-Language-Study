# 배열과 문자열

- 배열은 동일한 데이터 유형의 여러 요소를 연속적으로 저장하는 데이터 구조 
- 배열을 사용하면 인덱스를 사용하여 각 요소에 쉽게 액세스할 수 있음
- 배열은 데이터를 순차적으로 저장하기 때문에 반복문과 함께 사용할 때 매우 효과적

## 배열

### 배열 선언 방법

```
int numbers[5]; // 5개의 정수 값을 저장할 수 있는 정수형 배열을 선언
```

- 배열의 각 요소에 값을 할당하려면 인덱스를 사용 
- 인덱스는 0부터 시작
```
numbers[0] = 10; // 배열의 첫 번째 요소에 10을 할당
numbers[1] = 20; // 배열의 두 번째 요소에 20을 할당
numbers[2] = 30; // 배열의 세 번째 요소에 30을 할당
numbers[3] = 40; // 배열의 네 번째 요소에 40을 할당
numbers[4] = 50; // 배열의 다섯 번째 요소에 50을 할당
...
```

## 문자열

- C 언어에서 문자열은 문자의 배열로 처리 됨 
- 문자열의 끝에는 항상 NULL 문자 ('\0')가 있어야 함

### 문자열을 초기화 하고 선언하기

```
char greeting[] = "안녕하세요!";
```

- 문자열을 처리하려면 <string.h> 헤더 파일에 포함된 함수들을 사용할 수 있음
- 예를 들어, strlen() 함수를 사용하여 문자열의 길이를 계산하거나, strcpy() 함수를 사용하여 문자열을 복사할 수 있음

### 다차원 배열

- 다차원 배열은 여러 차원을 가진 데이터를 저장하기 위해 사용 
- 2차원 배열은 가장 일반적인 형태로는 행과 열로 구성된 표와 같은 구조를 가짐

```
int multiarray[2][3] = { // 이 배열(multiarray)은 2차원 배열로써 2개의 행과 3개의 열로 구성
    {1, 2, 3}, // 첫번째 행의 값
    {4, 5, 6} // 두번째 행의 값
};
```

multiarray의 배열은 아래와 같이 구성된 것이라 보면 됨! 
```
multiarray[0][0] = 1    multiarray[0][1] = 2    multiarray[0][2] = 3
multiarray[1][0] = 4    multiarray[1][1] = 5    multiarray[1][2] = 6
```

응용하기! 
- 중첩된 반복문을 사용하여 multiarray의 배열을 모두 출력하려면 아래와 같이 코드를 작성

```
#include <stdio.h>

int multiarray[2][3] = {
  {1, 2, 3}
  {4, 5, 6}
}

for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%d ", multiarray[i][j]);
    }
    printf("\n");
}

return 0;
```