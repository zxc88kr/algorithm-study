#include <iostream>
#include <vector>
#include <queue>
#include <utility>

int main()
{
    int n, m;
    std::cin >> n >> m;
    
    std::vector<std::vector<int>> route(n + 1, std::vector<int>(m + 1));
    
    char c;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            std::cin >> c;
            route[i][j] = c - '0';
        }
    
    std::queue<std::pair<int, int>> q;
    q.push({1, 1});
    
    std::vector<int> dx = { 0, 0, -1, 1 };
    std::vector<int> dy = { -1, 1, 0, 0 };
    
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && route[nx][ny] == 1)
            {
                q.push({nx, ny});
                route[nx][ny] = route[x][y] + 1;
            }
        }
    }
    std::cout << route[n][m];
}