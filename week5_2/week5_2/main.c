#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 5주차 실습 2 : while문으로 구구단 N단 출력하기
int main(void) {
    int dan;

    printf("2~9 사이의 정수 입력 : ");
    scanf("%d", &dan);

    if (dan < 2 || dan > 9) {                // 범위를 벗어나면 안내 후 종료
        printf("2부터 9 사이의 숫자를 입력해주세요.\n");
        return 0;
    }

    int i = 1;                               // 1) 초기식
    while (i <= 9) {                         // 2) 조건식
        printf("%d x %d = %d\n", dan, i, dan * i);
        i++;                                 // 3) 증감식 (빠뜨리면 무한 루프!)
    }

    return 0;
}