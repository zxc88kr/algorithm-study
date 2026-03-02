#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <queue>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, k;
    std::cin >> n >> k;
    
    std::vector<std::pair<int, int>> jewel(n);
    for (int i = 0; i < n; i++)
        std::cin >> jewel[i].first >> jewel[i].second;
    std::sort(jewel.begin(), jewel.end());
    
    std::vector<int> backpack(k);
    for (int i = 0; i < k; i++)
        std::cin >> backpack[i];
    std::sort(backpack.begin(), backpack.end());
    
    long long sum = 0;
    int idx = 0;
    std::priority_queue<int> pq;
    for (int i = 0; i < k; i++)
    {
        while (idx < n && jewel[idx].first <= backpack[i])
        {
            pq.push(jewel[idx].second);
            idx++;
        }
        
        if (!pq.empty())
        {
            sum += pq.top();
            pq.pop();
        }
    }
    std::cout << sum;
}