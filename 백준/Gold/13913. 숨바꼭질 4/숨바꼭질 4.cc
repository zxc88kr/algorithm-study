#include <iostream>
#include <vector>
#include <queue>
#include <deque>

int main()
{
    int n, k;
    std::cin >> n >> k;
    
    const int MAX = 100000;
    
    std::vector<int> dist(MAX + 1, -1);
    std::vector<int> parent(MAX + 1, 0);
    std::queue<int> q;
    
    dist[n] = 0;
    parent[n] = n;
    q.push(n);
    
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        
        if (cur == k) break;
        
        int nexts[3] = { cur - 1, cur + 1, cur * 2 };
        for (int i = 0; i < 3; i++)
        {
            int next = nexts[i];
            if (next < 0 || next > MAX) continue;
            
            if (dist[next] == -1)
            {
                dist[next] = dist[cur] + 1;
                parent[next] = cur;
                q.push(next);
            }
        }
    }
    
    std::cout << dist[k] << '\n';
    
    std::deque<int> dq;
    int cur = k;
    
    for (int i = 0; i < dist[k] + 1; i++)
    {
        dq.push_front(cur);
        cur = parent[cur];
    }
    
    for (auto it : dq)
        std::cout << it << ' ';
}