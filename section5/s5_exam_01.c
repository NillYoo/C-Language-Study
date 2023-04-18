#include <stdio.h>

int main() {
    int multiarray[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", multiarray[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
- 2x3 크기의 multiarray 2차원 배열이 생성되고, 주어진 값들로 초기화
- 중첩된 for 반복문을 사용하여 배열의 모든 요소를 순회하고, 각 요소를 출력
- 모든 요소를 출력한 후 줄바꿈을 수행하여 배열의 다음 행을 출력
*/