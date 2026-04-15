#ifndef MYTIME_H
#define MYTIME_H

#include <iostream>

class MyTime {
private:
    int day;
    int hour;
    int min;
    int sec;

public:
    MyTime(int d = 0, int h = 0, int m = 0, int s = 0);

    void convert(double duration);
    void print() const;
    MyTime add(const MyTime& t);
    void reset();
    void read();
};

#endif