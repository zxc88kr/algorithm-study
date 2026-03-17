#include <cstdio>
#include <vector>
#include <utility>

int main()
{
    int K;
    scanf("%d", &K);

    std::vector<std::pair<int, int>> d(6);
    for (int i = 0; i < 6; i++)
        scanf("%d %d", &d[i].first, &d[i].second);
    
    for (int i = 0; i < 6; i++)
    {
        if (d[i].first == d[(i + 2) % 6].first &&
            d[(i + 1) % 6].first == d[(i + 3) % 6].first)
        {
            int big = d[(i + 4) % 6].second * d[(i + 5) % 6].second;
            int small = d[(i + 1) % 6].second * d[(i + 2) % 6].second;
            printf("%d", (big - small) * K);
            break;
        }
    }
}