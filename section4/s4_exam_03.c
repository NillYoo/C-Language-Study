/* 
함수 연습을 위한 연습문제3

피보나치 수열의 n번째 항을 구하는 재귀 함수를 작성!
사용자로부터 정수 n을 입력받아 n번째 항을 출력하기!


(1) 피보나치 수열은 각 항이 바로 앞의 두 항의 합으로 이루어진 수열로, 처음 두 항은 0과 1로 시작
(2) 재귀 함수를 작성할 때는 기저 사례(base case)와 재귀 호출(recursive call)을 잘 정의해야한다  
- 기저 사례는 첫 번째 항과 두 번째 항이다 
- 재귀 호출은 n번째 항을 구하기 위해 n-1번째 항과 n-2번째 항을 더하는 것이다

*/

#include <stdio.h>

int fibonacci(int n) {
  if (n == 0)
  {
    return 0;
  } else if (n == 1)
  {
    return 1;
  } else
  {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main() {
  int n;

  printf("피보나치 수열의 몇 번째 항을 구하시겠습니까? ");
  scanf("%d", &n);

  printf("피보나치 수열의 %d번째 항은 %d 입니다.\n", n, fibonacci(n));

  return 0;
}


/*

피보나치 수열의 계산 과정
n이 10일 때 계산 과정은 아래와 같음

fibonacci(10) = fibonacci(9) + fibonacci(8)
fibonacci(9) = fibonacci(8) + fibonacci(7)
fibonacci(8) = fibonacci(7) + fibonacci(6)
fibonacci(7) = fibonacci(6) + fibonacci(5)
fibonacci(6) = fibonacci(5) + fibonacci(4)
fibonacci(5) = fibonacci(4) + fibonacci(3)
fibonacci(4) = fibonacci(3) + fibonacci(2)
fibonacci(3) = fibonacci(2) + fibonacci(1)
fibonacci(2) = fibonacci(1) + fibonacci(0)
fibonacci(1) = fibonacci(0) << 기본 조건에 도달 

이제 계산을 거슬러 올라감!

fibonacci(2) = 1 (fibonacci(1)) + 0 (fibonacci(0)) = 1
fibonacci(3) = 1 (fibonacci(2)) + 1 (fibonacci(1)) = 2
fibonacci(4) = 2 (fibonacci(3)) + 1 (fibonacci(2)) = 3
fibonacci(5) = 3 (fibonacci(4)) + 2 (fibonacci(3)) = 5
fibonacci(6) = 5 (fibonacci(5)) + 3 (fibonacci(4)) = 8
fibonacci(7) = 8 (fibonacci(6)) + 5 (fibonacci(5)) = 13
fibonacci(8) = 13 (fibonacci(7)) + 8 (fibonacci(6)) = 21
fibonacci(9) = 21 (fibonacci(8)) + 13 (fibonacci(7)) = 34

마지막으로 fibonacci(10)의 값을 구할 수 있음

fibonacci(10) = 34 (fibonacci(9)) + 21 (fibonacci(8)) = 55

결과적으로, fibonacci(10)은 55

*/
