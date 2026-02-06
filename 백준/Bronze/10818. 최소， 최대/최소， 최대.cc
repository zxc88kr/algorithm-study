#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, init;
    std::cin >> n >> init;
    
    int min, max;
    min = max = init;
    
    int temp;
    for (int i = 1; i < n; i++)
    {
        std::cin >> temp;
        min = temp < min ? temp : min;
        max = temp > max ? temp : max;
    }
    std::cout << min << ' ' << max;
}