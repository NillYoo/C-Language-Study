#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
      // int i는 1로 초기화
      // i가 10이 될때까지 반복
      // i는 반복 될 때마다 1씩 증가
        if (i % 2 == 0) { 
          // i를 2로 나누었을 때 나머지가 0인지 확인 
          // 0인 경우 for문 본문의 printf에서 i값을 출력하지 않음 
          // continue문을 사용하여 다음 반복으로 넘어감
            continue;
        }
        printf("%d\n", i); // if문에서 i를 2로 나누었을때 나머지가 0이 아닌 i의 값만 출력 
    }

    return 0;
}
