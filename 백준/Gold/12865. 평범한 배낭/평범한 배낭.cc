#include <iostream>
#include <vector>
#include <utility>
#include <cmath>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, k;
    std::cin >> n >> k;
    
    std::vector<std::pair<int, int>> item(n);
    for (int i = 0; i < n; i++)
        std::cin >> item[i].first >> item[i].second;
    
    std::vector<int> dp(k + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int w = item[i].first;
        int v = item[i].second;
        
        for (int j = k; j >= w; j--)
            dp[j] = std::max(dp[j], dp[j - w] + v);
    }
    std::cout << dp[k];
}