#include "MyTime.h"
#include <iomanip>
using namespace std;

// 생성자
MyTime::MyTime(int d, int h, int m, int s) {
    day = d; hour = h; min = m; sec = s;
}

// 초 → 시간 변환
void MyTime::convert(double duration) {
    int total = (int)duration;

    day = total / 86400;
    total %= 86400;

    hour = total / 3600;
    total %= 3600;

    min = total / 60;
    sec = total % 60;
}

// 출력
void MyTime::print() const {
    cout << setfill('0')
         << setw(2) << day << ":"
         << setw(2) << hour << ":"
         << setw(2) << min << ":"
         << setw(2) << sec << endl;
}

// 시간 더하기
MyTime MyTime::add(const MyTime& t) {
    MyTime result;

    result.sec = sec + t.sec;
    result.min = min + t.min + result.sec / 60;
    result.sec %= 60;

    result.hour = hour + t.hour + result.min / 60;
    result.min %= 60;

    result.day = day + t.day + result.hour / 24;
    result.hour %= 24;

    return result;
}

// 초기화
void MyTime::reset() {
    day = hour = min = sec = 0;
}

// 입력
void MyTime::read() {
    cout << "일(day)을 입력하세요: ";
    cin >> day;

    cout << "시간(hour)을 입력하세요: ";
    cin >> hour;

    cout << "분(min)을 입력하세요: ";
    cin >> min;

    cout << "초(sec)을 입력하세요: ";
    cin >> sec;
}