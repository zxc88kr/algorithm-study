#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::vector<int> x(n), v;
    for (int i = 0; i < n; i++)
        std::cin >> x[i];
    v = x;
    
    std::sort(v.begin(), v.end());
    v.erase(std::unique(v.begin(), v.end()), v.end());
    
    for (auto it : x)
        std::cout << std::lower_bound(v.begin(), v.end(), it) - v.begin() << ' ';
}