#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

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
    
    for (int i = 0; i < m; i++)
    {
        int a, b;
        std::cin >> a >> b;
        
        dp[a][b] = dp[b][a] = 1;
    }
    
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (dp[i][k] != INT_MAX && dp[k][j] != INT_MAX)
                    dp[i][j] = std::min(dp[i][j], dp[i][k] + dp[k][j]);
    
    int min = INT_MAX;
    int answer = 0;
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 1; j <= n; j++)
            count += dp[i][j];
        if (count < min)
        {
            min = count;
            answer = i;
        }
    }
    
    std::cout << answer;
}