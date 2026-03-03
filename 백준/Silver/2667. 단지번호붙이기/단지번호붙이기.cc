#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

std::vector<std::vector<int>> house;
std::vector<std::pair<int, int>> located;
std::vector<int> group;

std::vector<int> dx = { 0, 0, -1, 1 };
std::vector<int> dy = { -1, 1, 0, 0 };

int count = 0;

void dfs(int x, int y, int n)
{
    if (x < 0 || x >= n || y < 0 || y >= n) return;
    if (house[x][y] != 1) return;
    
    count++;
    house[x][y]++;
    
    for (int i = 0; i < 4; i++)
        dfs(x + dx[i], y + dy[i], n);
}

int main()
{
    int n;
    std::cin >> n;
    
    house.assign(n, std::vector<int>(n));
    
    char c;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            std::cin >> c;
            house[i][j] = c - '0';
            if (house[i][j] == 1)
                located.push_back({i, j});
        }
    
    for (int i = 0; i < located.size(); i++)
    {
        int x = located[i].first;
        int y = located[i].second;
        if (house[x][y] == 1)
        {
            dfs(x, y, n);
            group.push_back(count);
            count = 0;
        }
    }
    
    std::sort(group.begin(), group.end());
    
    std::cout << group.size() << '\n';
    for (int cnt : group)
        std::cout << cnt << '\n';
}