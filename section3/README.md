# Section 3

## 제어구조

- C 언어의 제어 구조는 `프로그램의 흐름`을 `조절`하고, `조건에 따라 실행`되는 코드를 결정하는데 사용 
- 주요 제어 구조로는 `조건문`, `반복문`, 그리고 `분기문`이 있음
- 제어 구조를 사용하여 C 언어로 작성된 프로그램의 실행 흐름을 다양한 방식으로 제어할 수 있음
- 프로그램 `로직`을 `구성`하는 데 `필수`적인 요소

---

### 조건문: 
`조건에 따라` 서로 다른 코드 블록을 실행

- `if` 문: 
  - `주어진 조건`이 `참(true)`일 경우 코드 블록을 실행

- `if-else` 문: 
  - `if 조건`이 `참(true)`일 경우 하나의 코드 블록을 실행 
  - `거짓(false)`일 경우 다른 코드 블록을 실행

- if-else if-else 문: 
  - `여러 조건`을 평가하고, 만족하는 조건에 따라 해당 코드 블록을 실행

```
int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
```

---

### 반복문: 
`특정 조건`이 `만족`되는 동안 코드 블록을 `반복`해서 실행

- `for` 문: 
  - `초기화`, `조건`, `증감식`을 사용하여 코드 블록을 반복 실행

```
for (int i = 0; i < 5; i++) {
  printf("Hello, World!\n");
}
```

- `while` 문: 
  - 주어진 조건이 `참인 동안` 코드 블록을 반복 실행.

```
int counter = 0;

while (counter < 5) {
    printf("Hello, World!\n");
    counter++;
}
```

- `do-while` 문: 
  - 코드 블록을 `최소 한 번 실행`한 후, 조건이 참인 동안 반복 실행.

```
int counter = 0;

do {
    printf("Hello, World!\n");
    counter++;
} while (counter < 5);
```

---

### 분기문: 
프로그램의 `흐름을 강제로 변경`합니다.


- `switch` 문: 
  - `하나의 변수` 또는 `표현식`을 `평가`하여 다양한 `case`에 해당하는 코드 블록을 실행 
  - `break` 문을 사용하여 각 case에서의 `실행을 중단`할 수 있음

- `break` 문: 
  - `switch` 문 또는 `반복`문에서 `실행을 중단`하고 해당 구문을 빠져나옴

```
int main() {
    int day;

    printf("Enter a number (1-7) representing a day of the week: ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("Invalid number");
    }

    return 0;
}
```

- `continue` 문: 
  - 반복문에서 `현재 반복을 중단`하고, `다음 반복`을 `시작`
  - 반복문의 흐름을 제어하고 조건에 따라 특정 반복을 건너뛸 수 있음

```
int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}
```