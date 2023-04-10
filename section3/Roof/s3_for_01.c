#include <stdio.h>

int main() {
  for (int i = 1; i <= 10; i++)
  /* 
  1) int i를 초기화 하고 값을 1로 설정
  2) i가 10보다 작거나 같으면 계속 반복(roof)됨
  3) i++ 증가식을 사용하여 반복 될때 마다 i 값이 1씩 증가
   */
  {
    printf("%d\n", i);
  }
  return 0;

}