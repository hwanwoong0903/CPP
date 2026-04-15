#include <iostream>
#include <iomanip>
using namespace std;

class MyTime {
private:
    int day;
    int hour;
    int min;
    int sec;

public:
    // 생성자
    MyTime(int d = 0, int h = 0, int m = 0, int s = 0) {
        day = d; hour = h; min = m; sec = s;
    }

    // 초 단위 시간을 d:h:m:s 로 변환
    void convert(double duration) {
        int total = (int)duration;

        day = total / 86400;
        total %= 86400;

        hour = total / 3600;
        total %= 3600;

        min = total / 60;
        sec = total % 60;
    }

    // 출력 (01:02:03:04 형태)
    void print() const {
        cout << setw(2) << setfill('0') << day << ":"
             << setw(2) << hour << ":"
             << setw(2) << min << ":"
             << setw(2) << sec << endl;
    }

    // 시간 더하기
    MyTime add(const MyTime& t) {
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
    void reset() {
        day = hour = min = sec = 0;
    }
};