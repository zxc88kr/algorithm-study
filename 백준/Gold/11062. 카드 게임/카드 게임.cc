#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> card;
std::vector<std::vector<int>> dp;

int solve(int left, int right, bool is_g_turn)
{
    if (left > right) return 0;
    if (dp[left][right] > 0) return dp[left][right];
    
    if (is_g_turn)
        dp[left][right] = std::max(card[left] + solve(left + 1, right, false),
                                   card[right] + solve(left, right - 1, false));
    else
        dp[left][right] = std::min(solve(left + 1, right, true),
                                   solve(left, right - 1, true));
    
    return dp[left][right];
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    std::cin >> t;
    
    while (t--)
    {
        int n;
        std::cin >> n;
        
        card.assign(n, 0);
        dp.assign(n, std::vector<int>(n, 0));
        
        for (int i = 0; i < n; i++)
            std::cin >> card[i];
        
        std::cout << solve(0, n - 1, true) << '\n';
    }
}