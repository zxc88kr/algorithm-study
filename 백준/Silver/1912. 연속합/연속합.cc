#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::vector<int> dp(n);
    for (int i = 0; i < n; i++)
        std::cin >> dp[i];
    
    int max = dp[0];
    for (int i = 1; i < n; i++)
    {
        if (dp[i - 1] > 0)
            dp[i] += dp[i - 1];
        if (dp[i] > max)
            max = dp[i];
    }
    std::cout << max;
}