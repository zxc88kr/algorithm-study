#include <iostream>
#include <string>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    
    std::cout << a + b - c << '\n';
    std::cout << std::stoi(std::to_string(a) + std::to_string(b)) - c;
}