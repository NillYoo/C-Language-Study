// 연습 2: 정수를 읽고 짝수, 홀수, 0으로 분류하는 프로그램 만들기

#include <stdio.h>

int main() {
    int number;

    while (1)
    {
        printf("정수를 입력해주세요(-1을 입력하면 프로그램 종료): ");
        scanf("%d", &number);

        if (number == -1) //입력한 값이 -1 인 경우 프로그램 종료
        {
            break;
        }

        switch (number % 2) // 입력된 number의 값을 2로 나누었을 대 나머지 값 저장
        {
        case 0: //나머지 값이 0인 경우 실행
            if (number == 0) //number의 값이 0인 경우 
            {
                printf("입력한 숫자는 0 입니다.\n");
            } else { //number의 값이 0이 아닌 경우
                printf("입력한 숫자는 짝수 입니다.\n");
            }
            break;
        case 1: //나머지 값이 1인 경우 실행
            printf("입력한 숫자는 홀수 입니다.\n");
            break;
        default: 
            continue;
        }
        
    }

    printf("프로그램 종료\n");
    return 0;
}
