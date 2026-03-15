#include <iostream>
#include <algorithm>

int main()
{
    int n, k;
    std::cin >> n >> k;
    
    int start = 1;
    int end = k;
    int ans;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        int smaller_cnt = 0;
        for (int i = 1; i <= n; i++)
            smaller_cnt += std::min(mid / i, n);
        
        if (smaller_cnt >= k)
        {
            end = mid - 1;
            ans = mid;
        }
        else start = mid + 1;
    }
    std::cout << ans;
}