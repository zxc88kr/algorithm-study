#include <iostream>
#include <vector>
#include <queue>

int main()
{
    int n, k;
    std::cin >> n >> k;
    
    std::vector<int> road(200000, -1);
    std::queue<int> q;
    
    road[n] = 0;
    q.push(n);
    
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        
        if (cur == k) break;
        
        if (cur - 1 >= 0 && road[cur - 1] == -1)
        {
            road[cur - 1] = road[cur] + 1;
            q.push(cur - 1);
        }
        if (cur + 1 <= k && road[cur + 1] == -1)
        {
            road[cur + 1] = road[cur] + 1;
            q.push(cur + 1);
        }
        if (cur < 100000 && road[cur * 2] == -1)
        {
            road[cur * 2] = road[cur] + 1;
            q.push(cur * 2);
        }
    }
    std::cout << road[k];
}