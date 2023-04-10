#include <stdio.h>

int main()
{
  int i = 1; //int i를 초기화 후 값을 1로 설정
  while (i <= 10) //조건 설정: i가 10보다 작거나 같을때 까지 반복 실행)
  {
    printf("%d\n", i);
    i++; // roof가 반복될때 마다 i값을 1씩 증가 시킴
  }
  
  return 0;
}
