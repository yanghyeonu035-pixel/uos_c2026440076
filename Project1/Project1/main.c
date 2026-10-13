#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 5주차 실습 1 : 다중 for문으로 피라미드 출력하기
int main(void) {
    int height;

    printf("피라미드 높이 입력 : ");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++) {          // 줄(층) 반복
        for (int j = 1; j <= height - i; j++) {  // 1) 왼쪽 공백 : 위로 갈수록 많음
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {   // 2) 별 : 1, 3, 5, 7 ... 개
            printf("*");
        }
        printf("\n");                            // 한 층이 끝나면 줄바꿈
    }

    return 0;
}