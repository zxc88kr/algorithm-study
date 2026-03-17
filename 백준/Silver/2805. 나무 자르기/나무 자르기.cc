#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m;
    std::cin >> n >> m;
    
    std::vector<int> tree(n);
    for (int i = 0; i < n; i++)
        std::cin >> tree[i];
    
    long long start = 0;
    long long end = *std::max_element(tree.begin(), tree.end());
    long long answer;
    while (start <= end)
    {
        long long mid = (start + end) / 2;
        long long sum = 0;
        
        for (int i = 0; i < n; i++)
            sum += (tree[i] > mid ? tree[i] - mid : 0);
        
        if (sum >= m)
        {
            answer = mid;
            start = mid + 1;
        }
        else end = mid - 1;
    }
    std::cout << answer;
}