#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

bool comp(std::pair<int, int>& p1, std::pair<int, int>& p2)
{
    if (p1.first == p2.first) return (p1.second < p2.second);
    return (p1.first < p2.first);
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int N;
    std::cin >> N;

    std::vector<std::pair<int, int>> point(N);
    for (int i = 0; i < N; i++)
        std::cin >> point[i].first >> point[i].second;

    std::sort(point.begin(), point.end(), comp);
    for (int i = 0; i < N; i++)
        std::cout << point[i].first << ' ' << point[i].second << '\n';
}