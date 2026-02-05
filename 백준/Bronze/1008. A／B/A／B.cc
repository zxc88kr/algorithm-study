#include <iostream>

int main()
{
    double x, y;
    std::cin >> x >> y;
    
    std::cout.precision(15);
    std::cout << (x / y);
}