#include <iostream>
#include <cmath>
#include <vector>

int main()
{
    int m, n;
    std::cin >> m >> n;
    
    std::vector<int> v;
    for (int i = m; i <= n; i++)
    {
        int x = std::round(std::sqrt(i));
        if (x * x == i) v.push_back(i);
    }
    
    int sum = 0;
    for (auto it : v)
        sum += it;
    
    if (v.empty()) std::cout << -1;
    else std::cout << sum << '\n' << v[0];
}