#include <iostream>
using namespace std;

struct MyTime {
    int hour;
    int minute;
};

void addTime(MyTime t1, MyTime t2, MyTime& t3) {
    // 1번 방법과 다른 점은 t3의 주소를 참조해서 t3가 가르키는 곳의 값을 넣어줌
    t3.hour = t1.hour + t2.hour;
    t3.minute = t1.minute + t2.minute;

    if (t3.minute >= 60) {
        t3.hour += t3.minute / 60;
        t3.minute %= 60;
    }
}

// 예제

int main(){

    MyTime a = {1, 50};
    MyTime b = {2, 30};
    MyTime c;

    addTime(a, b, c);

    cout << c.hour << "시간" << c.minute << "분\n";

    return 0;
}