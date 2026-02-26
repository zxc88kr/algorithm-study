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
    
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    
    std::vector<int> dp(n, 1);
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j])
                dp[i] = std::max(dp[i], dp[j] + 1);
    
    std::cout << *std::max_element(dp.begin(), dp.end());
}