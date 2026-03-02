#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, c;
    std::cin >> n >> c;
    
    std::vector<int> v(n);
    for (int i = 0; i < n; i++)
        std::cin >> v[i];
    std::sort(v.begin(), v.end());
    
    int start = 1;
    int end = v[n - 1] - v[0];
    int max_dist;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        int count = 1;
        int check = v[0];
        for (int i = 1; i < n; i++)
        {
            if (v[i] - check >= mid)
            {
                count++;
                check = v[i];
            }
            if (count == c) break;
        }
        
        if (count >= c)
        {
            max_dist = mid;
            start = mid + 1;
        }
        else end = mid - 1;
    }
    std::cout << max_dist;
}