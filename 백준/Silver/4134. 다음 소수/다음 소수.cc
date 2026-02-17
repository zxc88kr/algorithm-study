#include <iostream>

bool isPrime(long num)
{
    if (num == 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    for (long i = 3; i * i <= num; i += 2)
        if (num % i == 0)
            return false;
    return true;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        long num;
        std::cin >> num;
        while (true)
        {
            if(isPrime(num)) break;
            num++;
        }
        std::cout << num << '\n';
    }
}