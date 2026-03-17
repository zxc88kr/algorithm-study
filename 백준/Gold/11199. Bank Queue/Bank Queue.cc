#include <cstdio>
#include <vector>
#include <utility>
#include <queue>
#include <algorithm>

bool compare(const std::pair<int, int>& a, const std::pair<int, int>& b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first > b.first;
}

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);

    std::vector<std::pair<int, int>> people(n);
    for (int i = 0; i < n; i++)
    {
        int c, s;
        scanf("%d %d", &c, &s);

        people[i].first = s;
        people[i].second = c;
    }
    std::sort(people.begin(), people.end(), compare);

    std::priority_queue<int, std::vector<int>, std::less<int>> avail;

    int res = 0, u = 0;
    for (int i = t - 1; i >= 0; --i)
    {
        while (u < n && people[u].first == i)
        {
            avail.push(people[u].second);
            u++;
        }

        if (!avail.empty())
        {
            res += avail.top();
            avail.pop();
        }
    }
    printf("%d\n", res);
}