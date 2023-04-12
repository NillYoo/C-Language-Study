// 연습 1: switch 문을 사용한 간단한 계산기 프로그램 만들기!

/*더하기, 빼기, 곱하기, 나누기와 같은 기본 산술 연산을 수행할 수 있는 간단한 계산기를 만듭니다. 
'switch' 문을 사용하여 사용자 입력에 따라 수행할 작업을 결정합니다.*/

#include <stdio.h>

int main() {
    char operation;
    double num1, num2, result;

    printf("Enter an arithmetic operation (+, -, *, /): ");
    scanf(" %c", &operation);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 + num2;
        break;
    case '*':
        result = num1 + num2;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
        } else {
            printf("오류: 0으로는 나눌 수 없습니다.\n");
            return 1;
        }
        break;
    default:
        printf("오류: 올파르지 않은 요청입니다.\n");
        return 1;
    }

    printf("The result is: %.2lf\n", result);

    return 0;
}
