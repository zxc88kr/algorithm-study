#include <iostream>
#include <vector>
#include <queue>
#include <utility>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m;
    std::cin >> n >> m;
    
    std::vector<std::vector<int>> map(n, std::vector<int>(m));
    std::queue<std::pair<int, int>> q;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            std::cin >> map[i][j];
            map[i][j] -= 2;
            if (map[i][j] == 0) q.push({i, j});
        }
    
    int dx[4] = { 0, 0, -1, 1 };
    int dy[4] = { -1, 1, 0, 0 };
    
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (map[nx][ny] == -1)
            {
                map[nx][ny] = map[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (map[i][j] == -2) map[i][j] = 0;
            std::cout << map[i][j] << ' ';
        }
        std::cout << '\n';
    }
}