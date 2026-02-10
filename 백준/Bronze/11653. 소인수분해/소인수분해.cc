#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    
    for (int i = 2; i * i <= n; i++)
    {
        if (n == 1) break;
        while (n % i == 0)
        {
            n /= i;
            std::cout << i << std::endl;
        }
    }
    if (n != 1) std::cout << n << std::endl;
}