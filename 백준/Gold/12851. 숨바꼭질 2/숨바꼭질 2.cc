#include <iostream>
#include <vector>
#include <queue>

int main()
{
    int n, k;
    std::cin >> n >> k;
    
    const int MAX = 100000;
    
    std::vector<int> dist(MAX + 1, -1);
    std::vector<int> count(MAX + 1, 0);
    std::queue<int> q;
    
    dist[n] = 0;
    count[n] = 1;
    q.push(n);
    
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        
        int nexts[3] = { cur - 1, cur + 1, cur * 2 };
        for (int i = 0; i < 3; i++)
        {
            int next = nexts[i];
            if (next < 0 || next > MAX) continue;
            
            if (dist[next] == -1)
            {
                dist[next] = dist[cur] + 1;
                count[next] = count[cur];
                q.push(next);
            }
            else if (dist[next] == dist[cur] + 1)
                count[next] += count[cur];
        }
    }
    
    std::cout << dist[k] << '\n' << count[k];
}