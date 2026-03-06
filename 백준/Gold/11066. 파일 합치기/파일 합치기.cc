#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    std::cin >> t;
    
    while (t--)
    {
        int k;
        std::cin >> k;
        
        std::vector<std::vector<int>> dp(k + 1, std::vector<int>(k + 1, INT_MAX));
        std::vector<int> data(k + 1, 0);
        
        for (int i = 1; i <= k; i++)
        {
            std::cin >> data[i];
            dp[i][i] = 0;
            data[i] += data[i - 1];
        }
        
        for (int d = 1; d <= k - 1; d++)
            for (int i = 1; i <= k - d; i++)
            {
                int j = i + d;
                for (int p = i; p <= j - 1; p++)
                    dp[i][j] = std::min(dp[i][j], dp[i][p] + dp[p + 1][j] + data[j] - data[i - 1]);
            }
        
        std::cout << dp[1][k] << '\n';
    }
}