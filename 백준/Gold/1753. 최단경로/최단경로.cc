#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <climits>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int V, E;
    std::cin >> V >> E;
    
    int k;
    std::cin >> k;
    
    std::vector<std::vector<std::pair<int, int>>> graph(V + 1);
    std::vector<int> dist(V + 1, INT_MAX);
    
    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        std::cin >> u >> v >> w;
        graph[u].push_back({v, w});
    }
    
    std::priority_queue<std::pair<int, int>
        , std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;
    
    dist[k] = 0;
    pq.push({0, k});
    
    while (!pq.empty())
    {
        int cd = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        
        if (cd > dist[u]) continue;
        
        for (auto p : graph[u])
        {
            int v = p.first;
            int w = p.second;
            int nd = cd + w;
            
            if (nd < dist[v])
            {
                dist[v] = nd;
                pq.push({nd, v});
            }
        }
    }
    
    for (int i = 1; i <= V; i++)
    {
        if (dist[i] == INT_MAX) std::cout << "INF\n";
        else std::cout << dist[i] << '\n';
    }
}