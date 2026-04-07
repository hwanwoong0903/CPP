#include <iostream>
using namespace std;

struct MyTime {
    int hour;
    int minute;
};

void addTime(MyTime t1, MyTime t2, MyTime* pt) {
    MyTime result;

    result.hour = t1.hour + t2.hour;
    result.minute = t1.minute + t2.minute;

    if (result.minute >= 60) {
        result.hour += result.minute / 60;
        result.minute %= 60;
    }

    *pt = result; // t1, t2를 더해서 만들어진 시간을 pt가 가리키는 곳의 값으로 넣어줌
}

// 예제

int main(){

    MyTime a = {1, 50};
    MyTime b = {2, 30};
    MyTime c;

    addTime(a, b, &c);

    cout << c.hour << "시간" << c.minute << "분\n";

    return 0;
}