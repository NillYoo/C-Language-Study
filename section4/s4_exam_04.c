//별그리기 연습!! 

#include <stdio.h>

void star(int n) { //star 함수는 정수 n을 인자로 받아 해당 숫자 만큼 별을 출력!
    for (int i = 1; i <= n; i++) {
      //i는 1부터 시작해서 n까지 증가하며 반복 출력
      //총 n줄의 행을 출력함
        for (int j = 1; j <= i; j++) {
          //j는 1부터 시작해서 i까지 증가하며 반복 출력
          //i의 값 만큰 *을 출력함
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int num; // 정수형 변수 num 선언
    printf("별의 개수를 입력해 주세요: ");
    scanf("%d", &num); // 입력된 정수를 num에 저장

    star(num); //함수 star를 호출하여 star 함수 n에 num값을 대입

    return 0;
}
