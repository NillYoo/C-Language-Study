#include <stdio.h>

int main() {
    int drawing; // drawing이라는 int 변수 선언

    printf("1~3번 중 하나의 숫자를 골라주세요: ");
    scanf("%d", &drawing); //입력받은 숫자를 drawing에 저장

    switch (drawing) { //switch문을 사용하여 drawing의 값을 확인
        case 1: //입력된 값이 정수 1인 경우 아래 텍스트 출력 
            printf("1번을 고르셨네요! 아쉽지만 꽝 입니다!\n");
            break;//switch문 종료
        case 2: //입력된 값이 정수 2인 경우 아래 텍스트 출력
            printf("2번을 고르셨네요! 축하해요! 당첨 입니다!\n");
            break; //switch문 종료
        case 3: //입력된 값이 정수 3인 경우 아래 텍스트 출력
            printf("3번을 고르셨네요! 아쉽지만 꽝 입니다!\n");
            break; //switch문 종료
        default: //입력된 값이 1,2,3 정수가 아닌 경우 아래 텍스트 출력 후 switch문 종료
            printf("잘못된 숫자입니다.\n");
    }

    return 0;
}
