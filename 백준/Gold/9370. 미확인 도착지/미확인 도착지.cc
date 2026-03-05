#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <algorithm>
#include <climits>

std::vector<int> get_dist(int start, int n, const std::vector<std::vector<std::pair<int, int>>>& graph)
{
    std::vector<int> dist(n + 1, INT_MAX);
    std::priority_queue<std::pair<int, int>
            , std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;
    
    dist[start] = 0;
    pq.push({dist[start], start});
    
    while (!pq.empty())
    {
        int cd = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        
        if (cd > dist[u]) continue;
        
        for (auto next : graph[u])
        {
            int v = next.first;
            int w = next.second;
            
            if (cd + w < dist[v])
            {
                dist[v] = cd + w;
                pq.push({dist[v], v});
            }
        }
    }
    
    return dist;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    std::cin >> t;
    
    while (t--)
    {
        int n, m, k;
        std::cin >> n >> m >> k;
        
        std::vector<std::vector<std::pair<int, int>>> graph(n + 1);
        
        int s, g, h;
        std::cin >> s >> g >> h;
        
        int a, b, d;
        for (int i = 0; i < m; i++)
        {
            std::cin >> a >> b >> d;
            
            graph[a].push_back({b, d});
            graph[b].push_back({a, d});
        }
        
        std::vector<int> dist_s = get_dist(s, n, graph);
        std::vector<int> dist_g = get_dist(g, n, graph);
        std::vector<int> dist_h = get_dist(h, n, graph);
        
        std::vector<int> result;
        int x;
        for (int i = 0; i < k; i++)
        {
            std::cin >> x;
            long long dist_min = std::min((long long)dist_s[g] + dist_g[h] + dist_h[x]
                                        , (long long)dist_s[h] + dist_h[g] + dist_g[x]);
            if (dist_min == dist_s[x]) result.push_back(x);
        }
        std::sort(result.begin(), result.end());
        
        for (int num : result)
            std::cout << num << ' ';
        std::cout << '\n';
        
    }
}