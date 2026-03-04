#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>
#include <climits>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, k;
    std::cin >> n >> k;
    
    std::vector<int> dist(200002, INT_MAX);
    std::priority_queue<std::pair<int, int>
        , std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;
    
    dist[n] = 0;
    pq.push({0, n});
    
    while (!pq.empty())
    {
        int cd = pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        
        if (cd > dist[cur]) continue;
        
        if (cur + 1 <= k && cd + 1 < dist[cur + 1])
        {
            dist[cur + 1] = cd + 1;
            pq.push({cd + 1, cur + 1});
        }
        
        if (cur - 1 >= 0 && cd + 1 < dist[cur - 1])
        {
            dist[cur - 1] = cd + 1;
            pq.push({cd + 1, cur - 1});
        }
        
        if (cur <= 100000 && cd < dist[cur * 2])
        {
            dist[cur * 2] = cd;
            pq.push({cd, cur * 2});
        }
    }
    
    std::cout << dist[k];
}