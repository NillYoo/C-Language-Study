#include <stdio.h>

int main() {
  int i = 1; // int i를 초기화 하여 값을 1로 설정
  do {
    printf("%d\n", i); 
    i++; // 루프 반복 시 i값을 1씩 증가
  } while (i <= 10); //i 값이 10보다 작거나 같을 때 까지 반복실행 
  return 0;
}