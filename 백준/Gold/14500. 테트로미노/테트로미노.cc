#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

int n, m;

std::vector<std::vector<int>> grid;
std::vector<std::vector<bool>> visited;

int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

int sum_max = 0;

void dfs(int x, int y, int depth, int sum)
{
    if (depth == 4)
    {
        sum_max = std::max(sum_max, sum);
        return;
    }
    
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
        
        if (!visited[nx][ny])
        {
            visited[nx][ny] = true;
            dfs(nx, ny, depth + 1, sum + grid[nx][ny]);
            visited[nx][ny] = false;
        }
    }
}


void check_t(int x, int y)
{
    int count = 0;
    int sum = grid[x][y];
    int min_num = INT_MAX;
    
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
        
        count++;
        sum += grid[nx][ny];
        min_num = std::min(min_num, grid[nx][ny]);
    }
    
    if (count < 3) return;
    else if (count == 3) sum_max = std::max(sum_max, sum);
    else sum_max = std::max(sum_max, sum - min_num);
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::cin >> n >> m;
    
    grid.assign(n, std::vector<int>(m));
    visited.assign(n, std::vector<bool>(m));
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            std::cin >> grid[i][j];
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            visited[i][j] = true;
            dfs(i, j, 1, grid[i][j]);
            check_t(i, j);
            visited[i][j] = false;
        }
    
    std::cout << sum_max;
}