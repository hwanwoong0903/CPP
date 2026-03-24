#include<algorithm>
#include"3.hpp"

int main()
{
    std::string s;
    std:: cin >> s;
    std::cout << reverse(s) << std::endl;

    return 0;
}


std::string reverse(std::string s) // 문자열 입력
{
    reverse(s.begin(), s.end());
    return s;
}

