#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::vector<std::pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        std::cin >> v[i].first >> v[i].second;
    std::sort(v.begin(), v.end());
    
    std::vector<int> lis;
    for (int i = 0; i < n; i++)
    {
        int val = v[i].second;
        auto it = std::lower_bound(lis.begin(), lis.end(), val);
        if (it == lis.end()) lis.push_back(val);
        else *it = val;
    }
    std::cout << n - lis.size();
}