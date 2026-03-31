#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool playGuguOnce();
double playSpeedGugu(int nPlay);

bool playMultiplyOnce();
double playMultiply(int nPlay);

bool playAdditionOnce();
double playAddition(int nPlay);

bool playGuguOnce() {
    int a = rand() % 8 + 2; // 2~9
    int b = rand() % 8 + 2;

    int answer;
    printf("%d x %d = ", a, b);
    scanf("%d", &answer);

    if(answer == a * b) {
        printf("정답!\n");
        return true;
    } else {
        printf("오답! (정답: %d)\n", a * b);
        return false;
    }
}

double playSpeedGugu(int nPlay) {
    int correct = 0;

    for(int i = 0; i < nPlay; i++) {
        if(playGuguOnce())
            correct++;
    }

    return (double)correct / nPlay * 100;
}

// ===== 두 자리 곱셈 =====
bool playMultiplyOnce() {
    int a = rand() % 90 + 10; // 10~99
    int b = rand() % 90 + 10;

    int answer;
    printf("%d x %d = ", a, b);
    scanf("%d", &answer);

    if(answer == a * b) {
        printf("정답!\n");
        return true;
    } else {
        printf("오답! (정답: %d)\n", a * b);
        return false;
    }
}

double playMultiply(int nPlay) {
    int correct = 0;

    for(int i = 0; i < nPlay; i++) {
        if(playMultiplyOnce())
            correct++;
    }

    return (double)correct / nPlay * 100;
}

// ===== 여러 자리 덧셈 =====
bool playAdditionOnce() {
    int a = rand() % 9000 + 100; // 3~4자리
    int b = rand() % 9000 + 100;

    int answer;
    printf("%d + %d = ", a, b);
    scanf("%d", &answer);

    if(answer == a + b) {
        printf("정답!\n");
        return true;
    } else {
        printf("오답! (정답: %d)\n", a + b);
        return false;
    }
}

double playAddition(int nPlay) {
    int correct = 0;

    for(int i = 0; i < nPlay; i++) {
        if(playAdditionOnce())
            correct++;
    }

    return (double)correct / nPlay * 100;
}

// ===== main =====
int main() {
    srand(time(NULL));

    int choice;
    int nPlay;
    double score = 0;

    printf("=== 게임 선택 ===\n");
    printf("1: 구구단\n");
    printf("2: 두 자리 수 곱셈\n");
    printf("3: 여러 자리 덧셈\n");
    printf("선택: ");
    scanf("%d", &choice);

    printf("몇 문제를 풀겠습니까? ");
    scanf("%d", &nPlay);

    switch(choice) {
        case 1:
            score = playSpeedGugu(nPlay);
            break;
        case 2:
            score = playMultiply(nPlay);
            break;
        case 3:
            score = playAddition(nPlay);
            break;
        default:
            printf("잘못된 선택입니다.\n");
            return 0;
    }

    printf("최종 점수: %.1f점\n", score);

    return 0;
}
