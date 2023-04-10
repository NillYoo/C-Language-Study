//for 루프를 사용하여 처음 10개의 짝수를 출력하는 프로그램 만들기! 

#include <stdio.h>

int main() {
  for (int i = 1; i <= 10; i++)
  /*
  i의 초기값을 1로 설정, 
  i가 10과 같아  질 때 까지 반복, 
  i는 반복 시 1씩 증가
   */
  {
    int result = i * 2; // 변수 result는 i에 2를 곱한 값을 저장한다 라고 선언함
    printf("%d\n", result);
  }

  return 0;
}

/*
for문 내부에 있는 result 변수의 i가 10이 될때 까지 result의 값이 계속 출력됨
즉, 1(i)*2, 2(i)*2, 3(i)*2... 이런식으로 i값이 10이 될 때까지 반복 됨 
*/