#include<iostream>

int main()
{
    double x, pi;
    int n;

    std::cout << "정수를 입력하시오 : ";
   
    std::cin >> n;
    
    for (int i = 1; i == 2 * n - 1; i + 4)
    {
        x += (double)1 / i;
    }
    for (int i = 3; i == 2 * n + 1; i + 4)
    {
        x -= (double)1 / i;
    }

    pi = 4 * x;

    std::cout << pi;

    return 0;
}