#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    if (n == 0)
    {
        std::cout << 0;
        return 0;
    }
    
    std::vector<int> v(n);
    for (int i = 0; i < n; i++)
        std::cin >> v[i];
    std::sort(v.begin(), v.end());

    int start = std::round(n * 0.15);
    int end = n - std::round(n * 0.15);
    n = end - start;
    
    int sum = 0;
    for (int i = start; i < end; i++)
        sum += v[i];
    std::cout << std::round((double)sum / n);
}