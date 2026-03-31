#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

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
        dp[i] = std::max(dp[i - 1] + dp[i], dp[i]);
    
    std::cout << *std::max_element(dp.begin(), dp.end());
}