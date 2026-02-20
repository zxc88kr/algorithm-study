#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

bool compare(const std::pair<int, int>& a, const std::pair<int, int>& b)
{
    return a.second < b.second;
}

int main()
{
    int n;
    std::cin >> n;
    
    std::vector<std::pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        std::cin >> v[i].first >> v[i].second;
    std::sort(v.begin(), v.end(), compare);
    
    int base1 = v[0].second;
    int base2 = v[n - 1].second;
    
    std::vector<int> results1, results2;
    for (int i = 0; i < n; i++)
    {
        results1.push_back(v[i].first - (v[i].second - base1));
        results1.push_back(v[i].first + (v[i].second - base1));
        results2.push_back(v[i].first - (base2 - v[i].second));
        results2.push_back(v[i].first + (base2 - v[i].second));
    }
    std::sort(results1.begin(), results1.end());
    std::sort(results2.begin(), results2.end());
    
    int result1 = results1[2 * n - 1] - results1[0];
    int result2 = results2[2 * n - 1] - results2[0];
    int result = (result1 < result2) ? result1 : result2;
    std::cout << result;
}