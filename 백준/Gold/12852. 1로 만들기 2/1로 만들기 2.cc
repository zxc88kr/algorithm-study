#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::vector<int> dp(n + 1);
    dp[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0 && dp[i / 2] + 1 < dp[i])
            dp[i] = dp[i / 2] + 1;
        if (i % 3 == 0 && dp[i / 3] + 1 < dp[i])
            dp[i] = dp[i / 3] + 1;
    }
    std::cout << dp[n] << '\n';
    
    while (n > 1)
    {
        std::cout << n << ' ';
        
        if (dp[n] == dp[n - 1] + 1) n -= 1;
        else if (n % 2 == 0 && dp[n] == dp[n / 2] + 1) n /= 2;
        else if (n % 3 == 0 && dp[n] == dp[n / 3] + 1) n /= 3;
    }
    std::cout << 1;
}