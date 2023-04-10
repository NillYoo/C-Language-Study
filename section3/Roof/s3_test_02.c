//  while 루프를 사용하여 역방향 카운트다운 프로그램 만들기! 

#include <stdio.h>

int main () {
  int i = 10; //변수 i의 값을 10으로 초기화
  while (i >= 1) // i의 값이 1이 될때 까지 반복
  {
    printf("%d\n", i);
    i--; // 반복 될 때 마다 i의 값을 1씩 감소시킴
  }
  
  return 0;
}