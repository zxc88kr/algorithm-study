#include <iostream>
#include <vector>

int main()
{
    int t;
    std::cin >> t;
    
    while (t--)
    {
        int n;
        std::cin >> n;
        
        std::vector<int> coin(n);
        for (int i = 0; i < n; i++)
            std::cin >> coin[i];
        
        int m;
        std::cin >> m;
        
        std::vector<int> dp(m + 1, 0);
        dp[0] = 1;
        
        for (int i = 0; i < n; i++)
            for (int j = coin[i]; j <= m; j++)
                dp[j] += dp[j - coin[i]];
        
        std::cout << dp[m] << '\n';
    }
}