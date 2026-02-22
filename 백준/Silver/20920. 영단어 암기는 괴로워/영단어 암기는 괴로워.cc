#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <utility>
#include <algorithm>

bool compare(const std::pair<std::string, int>& p1, const std::pair<std::string, int>& p2)
{
    if (p1.second != p2.second)
        return p1.second > p2.second;
    else if (p1.first.size() != p2.first.size())
        return p1.first.size() > p2.first.size();
    return p1.first < p2.first;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m;
    std::cin >> n >> m;
    
    std::unordered_map<std::string, int> dict;
    std::string str;
    for (int i = 0; i < n; i++)
    {
        std::cin >> str;
        if (str.size() < m) continue;
        dict[str]++;
    }
    
    std::vector<std::pair<std::string, int>> v(dict.begin(), dict.end());
    std::sort(v.begin(), v.end(), compare);
    
    for (auto it : v)
        std::cout << it.first << '\n';
}