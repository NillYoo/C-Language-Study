// 연습 3: 성적 계산기 프로그램 만들기!

/*
사용자로부터 학생의 점수(0에서 100 사이의 점수)를 읽고 
다음 기준에 따라 해당 문자 등급을 출력하는 프로그램 만들기

A: 90 - 100
B: 80 - 89
C: 70 - 79
D: 60 - 69
F: 0 - 59

- if-else 문을 사용하여 주어진 점수에 대한 적절한 문자 등급을 결정 
- 입력 점수가 유효한 범위(0-100) 내에 있지 않으면 오류 메시지를 표시
*/

#include <stdio.h>

int main() {
  int score;

  printf("점수를 입력하십시오: ");
  scanf("%d", &score);


  if ( score >= 90 && score <=100 )
  {
    printf("당신의 학점은 A 입니다.\n");
  } 
  else if ( score >= 80 && score <= 89 )
  {
    printf("당신의 학점은 B 입니다.\n");
  }
  else if ( score >= 70 && score <= 79 )
  {
    printf("당신의 학점은 C 입니다.\n");
  }
  else if ( score >= 60 && score <= 69 )
  {
    printf("당신의 학점은 D 입니다.\n");
  }
  else if ( score >= 0 && score <= 59 )
  {
    printf("당신의 학점은 F 입니다.\n");
  }
  else
  {
    printf("올바른 점수를 입력하십시오.\n");
  }
  
  return 0;
}