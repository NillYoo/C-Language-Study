/* 
함수 연습을 위한 연습문제2

두 정수를 입력받아 더하기, 빼기, 곱하기, 나누기 연산을 수행하는 함수를 각각 작성하고, 
사용자로부터 입력받은 두 정수에 대해 각 연산을 수행한 결과를 출력하기!

*/

#include <stdio.h>

int add(int a, int b) { //add 함수: 두개의 정수형 값을 입력 받아 더한 값을 계산하고 그 결과를 반환
  return a + b;
}

int subtract(int a, int b) { //subtract 함수: 두개의 정수형 값을 입력 받아 뺀 값을 계산하고 그 결과를 반환
  return a - b;
}

int multiply(int a, int b) { //multiply 함수: 두개의 정수형 값을 입력 받아 곱한 값을 계산 하고 그 결과를 반환
  return a * b;
}

double divide(int a, int b) { //divide 함수: 두개의 정수형 값을 입력 받아 나눈 값을 계산 하고 그 결과를 반환
  return (double)a / b;
}

int main() {
  int num1, num2; //정수형 변수 num1과 num2를 선언

  printf("첫 번째 정수를 입력하세요: ");
  scanf("%d", &num1); // 첫번째 입력한 정수는 변수 num1에 저장
  printf("두 번째 정수를 입력하세요: ");
  scanf("%d", &num2); // 두번재 입력한 정수는 변수 num2에 저장

  printf("%d + %d = %d\n", num1, num2, add(num1, num2)); //add 함수에 num1과 num2를 대입하고 그 결과를 출력
  printf("%d - %d = %d\n", num1, num2, subtract(num1, num2)); //subtract 함수에 num1과 num2를 대입하고 그 결과를 출력
  printf("%d * %d = %d\n", num1, num2, multiply(num1, num2)); //multiply 함수에 num1과 num2를 대입하고 그 결과를 출력
  printf("%d / %d = %.2lf\n", num1, num2, divide(num1, num2)); //divide 함수에 num1과 num2를 대입하고 그 결과를 출력

  return 0;
  
}