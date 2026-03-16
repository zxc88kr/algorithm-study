#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
    long long n;
    std::cin >> n;

    long long a, b, c, d, e, f;
    std::cin >> a >> b >> c >> d >> e >> f;

    if (n == 1)
    {
        long long sum = a + b + c + d + e + f;
        long long max = std::max({a, b, c, d, e, f});
        std::cout << sum - max;
    }
    else
    {
        long long x = std::min(a, f);
        long long y = std::min(b, e);
        long long z = std::min(c, d);
        
        long long one = std::min({x, y, z});
        long long two = std::min({x + y, y + z, z + x});
        long long three = x + y + z;
        
        long long cnt1 = 4 * (n - 1) * (n - 2) + (n - 2) * (n - 2);
        long long cnt2 = 4 * (n - 1) + 4 * (n - 2);
        long long cnt3 = 4;
        
        std::cout << one * cnt1 + two * cnt2 + three * cnt3;
    }
}