#include <iostream>
#include <string>
#include <queue>
#include <utility>

void bfs(int x, int y, std::vector<std::string>& grid, int n)
{
    std::queue<std::pair<int, int>> q;
    char color = grid[x][y];
    
    grid[x][y] = 'Z';
    q.push({ x, y });
    
    int dx[4] = { -1, 1, 0, 0 };
    int dy[4] = { 0, 0, -1, 1 };
    
    while (!q.empty())
    {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++)
        {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            
            if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
            
            if (grid[nx][ny] == color)
            {
                grid[nx][ny] = 'Z';
                q.push({ nx, ny });
            }
        }
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::vector<std::string> og_grid(n);
    for (int i = 0; i < n; i++)
        std::cin >> og_grid[i];
    
    std::vector<std::string> new_grid = og_grid;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (new_grid[i][j] == 'G') new_grid[i][j] = 'R';
    
    int og_count = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (og_grid[i][j] != 'Z')
            {
                bfs(i, j, og_grid, n);
                og_count++;
            }
    
    int new_count = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (new_grid[i][j] != 'Z')
            {
                bfs(i, j, new_grid, n);
                new_count++;
            }
    
    std::cout << og_count << ' ' << new_count;
}