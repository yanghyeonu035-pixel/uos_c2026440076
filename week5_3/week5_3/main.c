#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 5주차 실습 3 : while문으로 자릿수의 합과 뒤집은 수 구하기
int main(void) {
    int num;

    printf("양의 정수 입력 : ");
    scanf("%d", &num);

    int n = num;         // 원래 값(num)은 출력용으로 남겨두고, n을 깎아가며 계산
    int sum = 0;         // 자릿수의 합
    int reversed = 0;    // 뒤집은 수

    while (n > 0) {
        int digit = n % 10;               // 일의 자리 꺼내기 (12345 % 10 = 5)
        sum += digit;                     // 합에 더하기
        reversed = reversed * 10 + digit; // 기존 값을 한 칸 올리고 새 자리 붙이기
        n = n / 10;                       // 일의 자리 버리기 (12345 / 10 = 1234)
    }

    printf("각 자릿수의 합 : %d\n", sum);
    printf("거꾸로 뒤집은 수 : %d\n", reversed);

    return 0;
}