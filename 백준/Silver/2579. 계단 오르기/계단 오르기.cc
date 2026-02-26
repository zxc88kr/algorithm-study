#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::vector<int> stair(n);
    for (int i = 0; i < n; i++)
        std::cin >> stair[i];
    
    std::vector<int> dp(n);
    dp[0] = stair[0];
    
    if (n == 1)
    {
        std::cout << dp[0];
        return 0;
    }
    
    dp[1] = stair[0] + stair[1];
    if (n >= 3)
        dp[2] = std::max(stair[0] + stair[2], stair[1] + stair[2]);
    
    for (int i = 3; i < n; i++)
        dp[i] = std::max(dp[i - 2] + stair[i], dp[i - 3] + stair[i - 1] + stair[i]);
    
    std::cout << dp[n - 1];
}