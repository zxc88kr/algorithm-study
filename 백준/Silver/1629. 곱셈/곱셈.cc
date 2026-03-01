#include <iostream>

long long solve(long long a, long long b, long long c)
{
    if (b == 1) return a % c;
    
    long long k = solve(a, b / 2, c);
    if (b % 2 == 0) return (k * k) % c;
    else return ((k * k) % c * a) % c;
}

int main()
{
    long long a, b, c;
    std::cin >> a >> b >> c;
    
    std::cout << solve(a, b, c);
}

/*
3    4
1 2  2 2
 1 1



10 11 12
2                 0
8             6            6 6
10 10     10 8
3 5 4
243 4
3*3*3*3*3 4

4 9 7

4
28
343 7


7 3 4 = 3

(7*7*7)%4
3 + 3 + 3


3
*/