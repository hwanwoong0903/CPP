#include <iostream>
#include <string>
using namespace std;

struct wordpair{
        string eng;
        string kor;
};

// 예시

int main()
{
    wordpair a;

    a.eng = "apple";
    a.kor = "사과";

    cout << a.eng << " : "<< a.kor << endl;
    return 0;
}
