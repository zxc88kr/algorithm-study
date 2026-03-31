#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    int n;
    std::cin >> n;
    
    std::vector<int> dp(n);
    for (int i = 0; i < n; i++)
        std::cin >> dp[i];
    
    int max = dp[0];
    for (int i = 1; i < n; i++)
    {
        dp[i] = std::max(dp[i - 1] + dp[i], dp[i]);
        max = std::max(dp[i], max);
    }
    std::cout << max;
}