#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::vector<int> v(n);
    for (int i = 0; i < n; i++)
        std::cin >> v[i];
    std::sort(v.begin(), v.end());
    
    int start = 0;
    int end = n - 1;
    
    int min = INT_MAX;
    int res[2];
    
    while (start < end)
    {
        int test = v[start] + v[end];
        if (std::abs(test) < min)
        {
            min = std::abs(test);
            res[0] = v[start];
            res[1] = v[end];
        }
        if (test < 0) start++;
        else if (test > 0) end--;
        else if (test == 0) break;
    }
    std::cout << res[0] << ' ' << res[1];
}