#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int v, e;
    std::cin >> v >> e;
    
    std::vector<std::vector<int>> dp(v + 1, std::vector<int>(v + 1, INT_MAX));
    for (int i = 1; i <= v; i++)
        for (int j = 1; j <= v; j++)
            if (i == j) dp[i][j] = 0;
    
    int a, b, c;
    for (int i = 0; i < e; i++)
    {
        std::cin >> a >> b >> c;
        dp[a][b] = c;
    }
    
    for (int k = 1; k <= v; k++)
        for (int i = 1; i <= v; i++)
            for (int j = 1; j <= v; j++)
                if (dp[i][k] != INT_MAX && dp[k][j] != INT_MAX)
                    dp[i][j] = std::min(dp[i][j], dp[i][k] + dp[k][j]);
    
    int res = INT_MAX;
    for (int i = 1; i <= v; i++)
        for (int j = 1; j <= v; j++)
        {
            if (i == j) continue;
            if (dp[i][j] != INT_MAX && dp[j][i] != INT_MAX)
                res = std::min(res, dp[i][j] + dp[j][i]);
        }
    
    if (res == INT_MAX) std::cout << -1;
    else std::cout << res;
}