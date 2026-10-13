#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>   // rand, srand
#include <time.h>     // time

// 5주차 실습 6 : 난수 + do-while문으로 업다운 숫자 맞추기 게임
int main(void) {
    srand((unsigned int)time(NULL));   // 실행할 때마다 다른 난수가 나오도록 시작할 때 한 번만 호출

    int answer = rand() % 100 + 1;     // 1 ~ 100 사이의 정답 (rand() % 100 은 0~99, +1 해서 1~100)
    int guess;                         // 사용자가 입력한 숫자
    int count = 0;                     // 시도 횟수

    printf("1부터 100 사이의 숫자를 맞혀보세요!\n");

    do {                               // 최소 한 번은 입력을 받아야 하므로 do-while 사용
        printf("숫자 입력 : ");
        scanf("%d", &guess);
        count++;                       // 입력할 때마다 시도 횟수 1 증가

        if (guess > answer) {
            printf("DOWN\n");          // 입력한 수가 정답보다 크면
        }
        else if (guess < answer) {
            printf("UP\n");            // 입력한 수가 정답보다 작으면
        }
    } while (guess != answer);         // 정답을 맞힐 때까지 반복

    printf("정답입니다! 정답은 %d, 시도 횟수 : %d번\n", answer, count);

    return 0;
}