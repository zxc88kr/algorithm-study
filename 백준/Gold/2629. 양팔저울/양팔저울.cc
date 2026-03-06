#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int m;
    std::cin >> m;
    
    std::vector<int> weight(m);
    for (int i = 0; i < m; i++)
        std::cin >> weight[i];
    
    std::vector<std::vector<bool>> dp(m + 1, std::vector<bool>(15001, false));
    dp[0][0] = true;
    
    for (int i = 0; i < m; i++)
        for (int j = 0; j <= 15000; j++)
        {
            if (!dp[i][j]) continue;
            
            if (j + weight[i] <= 15000)
                dp[i + 1][j + weight[i]] = true;
            dp[i + 1][j] = true;
            dp[i + 1][std::abs(j - weight[i])] = true;
        }
    
    int t;
    std::cin >> t;
    
    int x;
    while (t--)
    {
        std::cin >> x;
        if (x > 15000) std::cout << 'N' << ' ';
        else std::cout << (dp[m][x] ? 'Y' : 'N') << ' ';
    }
}