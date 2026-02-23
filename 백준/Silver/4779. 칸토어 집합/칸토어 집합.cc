#include <iostream>
#include <cmath>

void kant(int n)
{
    if (n == 0)
    {
        std::cout << '-';
        return;
    }
    kant(n - 1);
    std::cout << std::string(std::pow(3, n - 1), ' ');
    kant(n - 1);
}

int main()
{
    std::ios::sync_with_stdio(false);
    
    int n;
    while (std::cin >> n)
    {
        kant(n);
        std::cout << '\n';
    }
}