#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

bool playMultiply(int nPlay) {
    int a = rand() % 90 + 10;   // 10 ~ 99
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

int main() {
    srand(time(NULL));

    int nPlay = 5;
    double score = playMultiply(nPlay);

    printf("점수: %.1f점\n", score);
}