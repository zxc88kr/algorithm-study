#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
#include <iostream>

int solution(std::vector<std::vector<int>> info, int n, int m)
{
    const int INF = INT_MAX;
    int item_count = info.size();
    
    std::vector<std::vector<int>> dp(item_count + 1, std::vector<int>(m, INF));
    dp[0][0] = 0;
    
    for (int i = 1; i <= item_count; i++)
    {
        int a_cost = info[i - 1][0];
        int b_cost = info[i - 1][1];
        
        for (int b = 0; b < m; b++)
        {
            if (dp[i - 1][b] == INF) continue;
            
            dp[i][b] = std::min(dp[i][b], dp[i - 1][b] + a_cost);
            
            if (b + b_cost < m)
                dp[i][b + b_cost] = std::min(dp[i][b + b_cost], dp[i - 1][b]);
        }
    }
    
    int answer = *std::min_element(dp[item_count].begin(), dp[item_count].end());
    if (answer >= n) answer = -1;
    
    return answer;
}