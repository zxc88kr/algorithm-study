#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    long long n, k;
    std::cin >> n >> k;
    
    long long res = 0;
    for (long long i = 1; i <= n; i++)
    {
        long long temp = i;
        long long digit = 1;
        
        while (temp >= 10)
        {
            temp /= 10;
            digit *= 10;
        }
        
        res = (res * digit * 10 + i) % k;
    }
    std::cout << res;
}