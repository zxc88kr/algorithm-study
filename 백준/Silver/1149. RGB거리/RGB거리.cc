#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    int house[3];
    std::cin >> house[0] >> house[1] >> house[2];
    
    int h0, h1, h2, n0, n1, n2;
    for (int i = 1; i < n; i++)
    {
        std::cin >> h0 >> h1 >> h2;
        n0 = h0 + (house[1] < house[2] ? house[1] : house[2]);
        n1 = h1 + (house[0] < house[2] ? house[0] : house[2]);
        n2 = h2 + (house[0] < house[1] ? house[0] : house[1]);

        house[0] = n0;
        house[1] = n1;
        house[2] = n2;
    }
    
    int min = house[0];
    if (house[1] < min) min = house[1];
    if (house[2] < min) min = house[2];
    std::cout << min;
}