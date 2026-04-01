#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    
    int answer = 0;
    
    if (n == 1) answer = 1;
    else if (n == 2) answer = 3;
    else
    {
        std::vector<int> dp(n + 1);
        dp[1] = 1;
        dp[2] = 3;
        
        for (int i = 3; i <= n; i++)
            dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
        
        answer = dp[n];
    }
    std::cout << answer;
}