#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main()
{
    int n, m;
    std::cin >> n >> m;
    
    std::vector<int> memory(n);
    for (int i = 0; i < n; i++)
        std::cin >> memory[i];
    
    std::vector<int> cost(n);
    for (int i = 0; i < n; i++)
        std::cin >> cost[i];
    
    std::vector<int> dp(10001, 0);
    for (int i = 0; i < n; i++)
        for (int j = 10000; j >= cost[i]; j--)
            dp[j] = std::max(dp[j], dp[j - cost[i]] + memory[i]);
    
    int idx = std::lower_bound(dp.begin(), dp.end(), m) - dp.begin();
    std::cout << idx;
}