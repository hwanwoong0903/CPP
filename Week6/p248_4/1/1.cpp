#include<iostream>
using namespace std;

static int MineMapMask[40][80];
static int MineMapLabel[40][80];

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

    return 0;
}