#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n, k;
    std::cin >> n >> k;
    
    std::vector<int> wire(n);
    for (int i = 0; i < n; i++)
        std::cin >> wire[i];
    
    long long start = 1;
    long long end = *std::max_element(wire.begin(), wire.end());
    long long max_len;
    while (start <= end)
    {
        long long mid = (start + end) / 2;
        long long count = 0;
        
        for (int i = 0; i < n; i++)
            count += wire[i] / mid;
        
        if (count >= k)
        {
            max_len = mid;
            start = mid + 1;
        }
        else end = mid - 1;
    }
    std::cout << max_len;
}