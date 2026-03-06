#include <iostream>
#include <vector>

std::vector<std::vector<int>> place;
std::vector<std::vector<int>> dp;

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };

int m, n;

int dfs(int x, int y)
{
    if (x == m - 1 && y == n - 1) return 1;
    if (dp[x][y] != -1) return dp[x][y];
    
    dp[x][y] = 0;
    
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx < 0 || ny < 0 || nx >= m || ny >= n) continue;
        if (place[nx][ny] < place[x][y]) dp[x][y] += dfs(nx, ny);
    }
    return dp[x][y];
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::cin >> m >> n;
    
    place.assign(m, std::vector<int>(n));
    dp.assign(m, std::vector<int>(n, -1));
    
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            std::cin >> place[i][j];
    
    std::cout << dfs(0, 0);
}