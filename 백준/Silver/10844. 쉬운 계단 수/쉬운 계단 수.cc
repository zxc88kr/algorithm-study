#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(10, 0));
    for (int i = 1; i <= 9; i++)
        dp[1][i] = 1;
    
    for (int i = 2; i <= n; i++)
    {
        dp[i][0] = dp[i - 1][1];
        for (int j = 1; j <= 8; j++)
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
        dp[i][9] = dp[i - 1][8];
    }
    
    int sum = 0;
    for (auto it : dp[n])
    {
        sum += it;
        sum %= 1000000000;
    }
    std::cout << sum;
}