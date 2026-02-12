#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>

bool compare(const std::pair<int, std::string>& p1,
             const std::pair<int, std::string>& p2)
{
    return p1.first < p2.first;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::vector<std::pair<int, std::string>> users(n);
    for (int i = 0; i < n; i++)
        std::cin >> users[i].first >> users[i].second;
    std::stable_sort(users.begin(), users.end(), compare);
    
    for (auto user : users)
        std::cout << user.first << ' ' << user.second << '\n';
}