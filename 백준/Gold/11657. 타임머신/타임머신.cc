#include <iostream>
#include <vector>
#include <climits>

struct Edge
{
    int u, v, w;
};

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m;
    std::cin >> n >> m;
    
    std::vector<Edge> edges(m);
    for (int i = 0; i < m; i++)
        std::cin >> edges[i].u >> edges[i].v >> edges[i].w;
    
    std::vector<long long> dist(n + 1, LLONG_MAX);
    dist[1] = 0;
    
    for (int i = 1; i <= n; i++)
        for (int j = 0; j < m; j++)
        {
            int u = edges[j].u;
            int v = edges[j].v;
            int w = edges[j].w;
            
            if (dist[u] == LLONG_MAX) continue;
            
            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                if (i == n)
                {
                    std::cout << -1;
                    return 0;
                }
            }
        }
    
    for (int i = 2; i <= n; i++)
    {
        if (dist[i] == LLONG_MAX) dist[i] = -1;
        std::cout << dist[i] << '\n';
    }
}