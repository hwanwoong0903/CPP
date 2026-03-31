#include <stdio.h>
#include <stdlib.h>
#include <time.h>

bool playAdditionOnce() {
    int a = rand() % 9000 + 100;   // 100 ~ 9099 (3~4자리 느낌)
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

    return (double)correct / nPlay * 100; // 점수 %
}

int main() {
    srand(time(NULL));

    int nPlay = 5;
    double score = playAddition(nPlay);

    printf("점수: %.1f점\n", score);
}