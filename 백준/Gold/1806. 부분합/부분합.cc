#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, s;
    std::cin >> n >> s;
    
    std::vector<int> arr(n + 1, 0);
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    
    int start = 0;
    int end = 0;
    int sum = 0;
    int min_len = INT_MAX;
    
    while (start <= end)
    {
        if (sum >= s)
        {
            min_len = std::min(min_len, end - start);
            
            sum -= arr[start];
            start++;
        }
        else if (end == n) break;
        else
        {
            sum += arr[end];
            end++;
        }
    }
    
    if (min_len == INT_MAX) min_len = 0;
    std::cout << min_len;
}