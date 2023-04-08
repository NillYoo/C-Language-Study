// 정수를 입력 받아 양수인지 음수인지 0인지 확인하는 프로그램 만들기!

#include <stdio.h>

int main() {
  int num;

  printf("숫자를 입력하세요: ");
  scanf("%d", &num);

  if (num > 0)
  {
    printf("입력한 숫자는 '양수' 입니다.\n");
  } else if (num < 0)
  {
    printf("입력한 숫자는 '음수' 입니다.\n");
  } else
  {
    printf("입력한 숫자는 '0' 입니다.\n");
  }
  
  return 0;
  
}