#include <iostream>
#include <iomanip>
using namespace std;

void print() const {
    cout << setfill('0')
         << setw(2) << day << ":"
         << setw(2) << hour << ":"
         << setw(2) << min << ":"
         << setw(2) << sec << endl;
}