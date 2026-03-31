#include <iostream>
#include <cmath>

int main()
{
    double r, g, b;
    std::cin >> r >> g >> b;
    
    r /= 255;
    g /= 255;
    b /= 255;
    
    double k = 1 - std::max(std::max(r, g), b);
    
    double c, m, y;
    
    if (k == 1) c = m = y = 0;
    else
    {
        c = (1 - r - k) / (1 - k);
        m = (1 - g - k) / (1 - k);
        y = (1 - b - k) / (1 - k);
    }
    
    std::cout << c << ' ' << m << ' ' << y << ' ' << k;
}