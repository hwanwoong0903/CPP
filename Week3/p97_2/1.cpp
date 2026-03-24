#include<iostream>

int main()
{
    int a;

    std::cout << "10000미만의 정수를 입력하시오 : ";
    while (true)
    {
        std::cin >> a;
        if (a <= 10000)
        {
            break;
        }
        else
        {
            std::cout << "10000미만의 정수를 입력하시오 : ";
        }
    }
    
    int b;
    b = a / 1000;
    std::cout << b << "천";
    a %= 1000;
    
    b = a / 100;
    std::cout << b << "백";
    a %= 100;
    
    b = a / 10;
    std::cout << b << "십";
    a %= 10;
    
    std:: cout << a;

    return 0;
}