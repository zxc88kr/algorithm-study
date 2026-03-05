#include <iostream>
#include <vector>
#include <climits>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m;
    std::cin >> n >> m;
    
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(n + 1, INT_MAX));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i == j) dp[i][j] = 0;
    
    int a, b, c;
    for (int i = 0; i < m; i++)
    {
        std::cin >> a >> b >> c;
        dp[a][b] = std::min(dp[a][b], c);
    }
    
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (dp[i][k] != INT_MAX && dp[k][j] != INT_MAX)
                    dp[i][j] = std::min(dp[i][j], dp[i][k] + dp[k][j]);
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (dp[i][j] == INT_MAX) dp[i][j] = 0;
            std::cout << dp[i][j] << ' ';
        }
        std::cout << '\n';
    }
}