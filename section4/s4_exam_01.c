/* 
함수 연습을 위한 연습문제1

두 정수를 입력받아 더한 값을 반환하는 함수를 작성하기!! 
*/

#include <stdio.h>

int plus(int a, int b) {
  /*
  - plus라는 이름의 함수를 선언하고 정의
  - 이 함수(plus)는 두 개의 정수(int)형 매개변수 a와 b를 입력받아 그 합을 계산하고 반환하는 역할
  */
  int sum = a + b;
  // a와 b의 값을 더하여 새로운 변수인 sum에 저장
  return sum;
  // 계산 된 sum의 값을 반환
}

int main() {
  /*
  - 프로그램의 메인 함수 
  - 여기서 사용자로부터 입력을 받고 더하기 함수를 호출하여 결과를 출력
  */
  int num1, num2;
  // 사용자로부터 입력받을 두 정수를 저장할 변수(num1, num2)를 선언

  printf("첫번째 숫자를 입력하세요: ");
  scanf("%d", &num1);
  
  printf("두번째 숫자를 입력하세요: ");
  scanf("%d", &num2);

  int result = plus(num1, num2);
  //plus 함수를 호출하여 num1과 num2의 합을 계산하고 result 변수에 저장
  

  printf("두 숫자의 합은 %d입니다.\n", result);

  return 0;

}
