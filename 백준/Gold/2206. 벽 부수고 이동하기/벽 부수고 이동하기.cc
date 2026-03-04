#include <iostream>
#include <vector>
#include <queue>

struct Node
{
    int x;
    int y;
    int broken;
};

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m;
    std::cin >> n >> m;
    
    std::vector<std::vector<int>> maze(n + 1, std::vector<int>(m + 1));
    std::vector<std::vector<std::vector<int>>> dist(
        n + 1, std::vector<std::vector<int>>(m + 1, std::vector<int>(2)));
    
    char c;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            std::cin >> c;
            maze[i][j] = c - '0';
        }
    
    std::queue<Node> q;
    q.push({1, 1, 0});
    dist[1][1][0] = 1;
    
    int dx[4] = { 0, 0, -1, 1 };
    int dy[4] = { -1, 1, 0, 0 };
    
    while (!q.empty())
    {
        Node cur = q.front();
        q.pop();
        
        int x = cur.x;
        int y = cur.y;
        int broken = cur.broken;
        
        if (x == n && y == m)
        {
            std::cout << dist[x][y][broken];
            return 0;
        }
        
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx <= 0 || ny <= 0 || nx > n || ny > m) continue;
            
            if (maze[nx][ny] == 0 && dist[nx][ny][broken] == 0)
            {
                dist[nx][ny][broken] = dist[x][y][broken] + 1;
                q.push({nx, ny, broken});
            }
            else if (maze[nx][ny] == 1 && broken == 0 && dist[nx][ny][1] == 0)
            {
                dist[nx][ny][1] = dist[x][y][0] + 1;
                q.push({nx, ny, 1});
            }
        }
    }
    std::cout << -1;
}