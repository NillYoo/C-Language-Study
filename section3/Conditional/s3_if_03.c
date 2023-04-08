// 영문자를 입력 받아 대문자 인지 소문자 인지 확인하는 프로그램 만들기!

#include <stdio.h>

int main() {
  char word; // 문자형 데이터 타입 char을 사용하여 변수 word를 선언

  printf("영문자를 입력 하세요: ");
  scanf("%c", &word); //입력된 값을 변수 word에 저장

  if (word >= 'A' && word <= 'Z') 
  // '&&' AND 연산자를 사용
  // 입력된 값이 대문자 'A'와 같거나 크다, 'Z'와 같거나 작다 라는 두 조건을 모두 충족 하는지 확인
  {
    printf("입력한 영문자 '%c'는 '대문자' 입니다.\n", word);
  } else if (word >= 'a' && word <= 'z')
    // '&&' AND 연산자를 사용
    // 입력된 값이 소문자 'a'와 같거나 크다, 'a'와 같거나 작다 라는 두 조건을 모두 충족 하는지 확인 
  {
    printf("입력한 영문자 '%c'는 '소문자' 입니다.\n", word);
  } else {
    printf("입력한 문자 '%c'는 올바른 영문자가 아닙니다.\n", word);
  }

  return 0;
  
}