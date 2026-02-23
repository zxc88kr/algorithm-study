#include <iostream>
#include <cmath>

void hanoi(int n, int begin, int end, int through)
{
    if (n <= 0) return;
    hanoi(n - 1, begin, through, end);
    std::cout << begin << ' ' << end << '\n';
    hanoi(n - 1, through, end, begin);
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cout.tie(NULL);
    
    int k;
    std::cin >> k;
    
    std::cout << (int)std::pow(2, k) - 1 << '\n';
    hanoi(k, 1, 3, 2);
}