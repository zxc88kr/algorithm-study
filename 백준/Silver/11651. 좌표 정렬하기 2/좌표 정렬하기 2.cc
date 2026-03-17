#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>

bool comp(std::pair<int, int> p1, std::pair<int, int> p2)
{
    if (p1.second == p2.second) return (p1.first < p2.first);
    return (p1.second < p2.second);
}

int main()
{
    int N;
    scanf("%d", &N);

    std::vector<std::pair<int, int>> point(N);
    for (int i = 0; i < N; i++)
        scanf("%d %d", &point[i].first, &point[i].second);

    std::sort(point.begin(), point.end(), comp);
    for (int i = 0; i < N; i++)
        printf("%d %d\n", point[i].first, point[i].second);
}