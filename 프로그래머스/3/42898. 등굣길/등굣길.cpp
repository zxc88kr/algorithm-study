#include <vector>

int solution(int m, int n, std::vector<std::vector<int>> puddles)
{
    std::vector<std::vector<int>> grid(n + 1, std::vector<int>(m + 1, 0));
    std::vector<std::vector<bool>> water(n + 1, std::vector<bool>(m + 1, false));
    
    for (auto& p : puddles)
        water[p[1]][p[0]] = true;
    
    grid[1][1] = 1;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 && j == 1) continue;
            int top = (water[i - 1][j] ? 0 : grid[i - 1][j]);
            int left = (water[i][j - 1] ? 0 : grid[i][j - 1]);
            grid[i][j] = (top + left) % 1000000007;
        }
    
    return grid[n][m];
}