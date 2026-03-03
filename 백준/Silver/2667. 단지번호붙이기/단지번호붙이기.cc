#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <algorithm>

std::vector<std::vector<int>> house;
std::vector<std::pair<int, int>> located;
std::vector<int> group;

void dfs(int x, int y, int n)
{
    int count = 0;
    std::queue<std::pair<int, int>> q;
    
    q.push({x, y});
    count++;
    house[x][y]++;
    
    while (!q.empty())
    {
        int xx = q.front().first;
        int yy = q.front().second;
        q.pop();
        
        if (xx + 1 < n && house[xx + 1][yy] == 1)
        {
            q.push({xx + 1, yy});
            count++;
            house[xx + 1][yy]++;
        }
        if (yy + 1 < n && house[xx][yy + 1] == 1)
        {
            q.push({xx, yy + 1});
            count++;
            house[xx][yy + 1]++;
        }
        if (xx - 1 >= 0 && house[xx - 1][yy] == 1)
        {
            q.push({xx - 1, yy});
            count++;
            house[xx - 1][yy]++;
        }
        if (yy - 1 >= 0 && house[xx][yy - 1] == 1)
        {
            q.push({xx, yy - 1});
            count++;
            house[xx][yy - 1]++;
        }
    }
    group.push_back(count);
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
        if (house[x][y] == 1) dfs(x, y, n);
    }
    
    std::sort(group.begin(), group.end());
    
    std::cout << group.size() << '\n';
    for (int cnt : group)
        std::cout << cnt << '\n';
}