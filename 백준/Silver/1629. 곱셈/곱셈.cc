#include <iostream>

long long solve(int a, int b, int c)
{
    if (b == 1) return a % c;
    
    long long k = solve(a, b/2, c);
    
    if (b % 2 == 0) return (k * k) % c;
    else return (((k * k) % c) * a) % c;
}

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    
    std::cout << solve(a, b, c);
}