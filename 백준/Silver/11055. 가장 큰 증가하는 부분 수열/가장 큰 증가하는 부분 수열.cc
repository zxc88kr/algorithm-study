#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    
    std::vector<int> arr(n);
    std::vector<int> dp(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
        dp[i] = arr[i];
    }
    
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j])
                dp[i] = std::max(dp[i], dp[j] + arr[i]);
    
    std::cout << *std::max_element(dp.begin(), dp.end());
}