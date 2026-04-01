#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    int n;
    std::cin >> n;
    
    std::vector<int> dp(n + 1);
    for (int i = 1; i <= n; i++) dp[i] = i;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j * j <= i; j++)
            dp[i] = std::min(dp[i], dp[i - j * j] + 1);
    
    std::cout << dp[n];
}