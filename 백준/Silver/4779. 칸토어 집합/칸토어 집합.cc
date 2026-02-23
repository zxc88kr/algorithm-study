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
    for (int i = 0; i < std::pow(3, n - 1); i++)
        std::cout << ' ';
    kant(n - 1);
}

int main()
{
    int n;
    while (std::cin >> n)
    {
        kant(n);
        std::cout << '\n';
    }
}