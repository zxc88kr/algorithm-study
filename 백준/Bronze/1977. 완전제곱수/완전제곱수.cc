#include <iostream>
#include <cmath>
#include <vector>

int main()
{
    int m, n;
    std::cin >> m >> n;
    
    int min_range = std::ceil(std::sqrt(m));
    int max_range = std::floor(std::sqrt(n));
    
    std::vector<int> v;
    for (int i = m; i <= n; i++)
        for (int j = min_range; j <= max_range; j++)
            if (j * j == i)
            {
                v.push_back(i);
                break;
            }
    
    int sum = 0;
    for (auto it : v)
        sum += it;
    
    if (v.empty()) std::cout << -1;
    else std::cout << sum << '\n' << v[0];
}