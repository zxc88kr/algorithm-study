#include <iostream>
#include <algorithm>

int main()
{
    int d1, d2, x;
    std::cin >> d1 >> d2 >> x;
    
    if (d2 > d1) std::swap(d1, d2);

    std::cout << std::fixed << (double)(d1 * d2 * 100) / (x * d2 + (100 - x) * d1);
}