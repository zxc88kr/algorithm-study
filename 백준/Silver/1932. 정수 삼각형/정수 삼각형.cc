#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::vector<std::vector<int>> dp(n, std::vector<int>(n, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            std::cin >> dp[i][j];
    
    for (int i = 1; i < n; i++)
        dp[i][0] += dp[i - 1][0];
    for (int i = 1; i < n; i++)
        for (int j = 1; j <= i; j++)
            dp[i][j] += (dp[i - 1][j - 1] > dp[i - 1][j] ? dp[i - 1][j - 1] : dp[i - 1][j]);
    
    std::cout << *std::max_element(dp[n - 1].begin(), dp[n - 1].end());
}