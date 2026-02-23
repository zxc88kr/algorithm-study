#include <iostream>

long long fact(long long n)
{
    if (n == 0) return 1;
    return n * fact (n - 1);
}

int main()
{
    long long n;
    std::cin >> n;
    
    std::cout << fact(n);
}