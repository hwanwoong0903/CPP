#include<iostream>
#include <cstdlib>
using namespace std;

static int MineMapMask[40][80];
static int MineMapLabel[40][80];

void placeMines(int width, int height, int mineCount) {
    int placed = 0; // 현재 매설한 지뢰 개수

    while (placed < mineCount) { // 목표 지뢰 개수까지 반복
        int x = rand() % width; // 0부터 가로 -1까지 랜덤하게 x에 초기화
        int y = rand() % height; // 0부터 세로 -1까지 랜덤하게 y에 초기화

        if (MineMapMask[y][x] == 1) continue; // 이미 매설된 곳이면 넘어가기

        MineMapMask[y][x] = 1; // 지뢰 매설
        placed++; // 현재 매설 지뢰 개수에 1더해줌
    }
}

int main(){
    
    int garo, sero;

    cout << "지뢰 맵의 크기 (세로 가로)를 입력하시오 : ";
    cin >> sero >> garo;

    if (garo > 80) garo = 80;
    if (sero > 40) sero = 40;

    for (int i = 0; i < sero; i++){
        for (int j = 0; j < garo; j++){
            MineMapMask[i][j] = 0;
            MineMapLabel[i][j] = 0;
        }
    }

    cout << "맵 생성 " << sero << "x" << garo << endl;

    int mineCount;
    cout << "지뢰 개수 입력: ";
    cin >> mineCount;

    placeMines(garo, sero, mineCount);
    
    return 0;
}