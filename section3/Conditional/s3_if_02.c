// 소수가 포함된 숫자를 입력받아 반올림 하는 프로그램 만들기!

#include <stdio.h>

int main() {
  float num;
  int rounded;

  printf("숫자를 입력하세요: ");
  scanf("%f", &num);

  if (num >= 0) 
  // 입력된 숫자가 0 보다 크거나 같은 지 확인
  {
    rounded = (int)(num + 0.5); 
    // 조건이 참이면 num에 저장된 숫자 + 0.5을 한뒤 rounded에 계산 된 값을 저장
    // *타입 캐스팅을 사용 -> (int): float 타입인 num의 값을 int타입으로 변환해줌 
  }
  else
  {
    rounded = (int)(num - 0.5); 
    // 조건이 거짓이면 num에 저장된 숫자 - 0.5을 한뒤 rounded에 계산 된 값을 저장
    // *타입 캐스팅을 사용 -> (int): float 타입인 num의 값을 int타입으로 변환해줌 
  }

  printf("입력한 숫자의 반올림 결과는 '%d' 입니다.\n", rounded);
  // rounded에 저장된 값을 출력
  //타입 캐스팅을 통해 float타입의 값이 int타입의 값으로 변환되면서 소수점은 버리고 정수 값만 출력되어짐
  
  return 0;
  
}