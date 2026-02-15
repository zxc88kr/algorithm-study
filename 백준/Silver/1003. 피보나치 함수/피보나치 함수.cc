#include <iostream>
#include <vector>

int main()
{
    std::vector<int> fibo(41);
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 41; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    
    int t, x;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::cin >> x;
        if (x == 0) std::cout << 1 << ' ' << 0 << '\n';
        else std::cout << fibo[x - 1] << ' ' << fibo[x] << '\n';
    }
}