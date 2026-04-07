#include <iostream>
using namespace std;

struct MyTime {
    int hour;
    int minute;
};

MyTime addTime(MyTime t1, MyTime t2) {
    MyTime result;

    result.hour = t1.hour + t2.hour;
    result.minute = t1.minute + t2.minute;

    // 분이 60 넘으면 처리
    if (result.minute >= 60) {
        result.hour += result.minute / 60;
        result.minute %= 60;
    }

    return result;
}

// 예제

int main(){
    
    MyTime a = {1, 50};
    MyTime b = {2, 30};

    MyTime c = addTime(a, b);

    cout << c.hour << "시간" << c.minute << "분\n";
    return 0;
}