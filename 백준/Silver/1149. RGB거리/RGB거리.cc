#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    int c[3];
    std::cin >> c[0] >> c[1] >> c[2];
    
    int r, g, b, nr, ng, nb;
    for (int i = 1; i < n; i++)
    {
        std::cin >> r >> g >> b;
        nr = r + (c[1] < c[2] ? c[1] : c[2]);
        ng = g + (c[0] < c[2] ? c[0] : c[2]);
        nb = b + (c[0] < c[1] ? c[0] : c[1]);
        
        c[0] = nr;
        c[1] = ng;
        c[2] = nb;
    }
    
    int min = c[0];
    if (c[1] < min) min = c[1];
    if (c[2] < min) min = c[2];
    std::cout << min;
}