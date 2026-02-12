#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>

bool comp(const std::pair<int, std::string>& p1,
          const std::pair<int, std::string>& p2)
{
    return (p1.first < p2.first);
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int N;
    std::cin >> N;

    std::vector<std::pair<int, std::string>> user(N);
    for (int i = 0; i < N; i++)
        std::cin >> user[i].first >> user[i].second;

    std::stable_sort(user.begin(), user.end(), comp);
    for (int i = 0; i < N; i++)
        std::cout << user[i].first << ' ' << user[i].second << '\n';
}