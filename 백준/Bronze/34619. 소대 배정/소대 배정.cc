#include <iostream>

int main()
{
    int a, b, n, k;
    std::cin >> a >> b >> n >> k;
    
    int x = (k - 1) / (b * n) + 1;
    int y = ((k - 1) % (b * n)) / n + 1;
    
    std::cout << x << ' ' << y;
}