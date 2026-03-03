#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> graph;
std::vector<int> visited_order;

int order = 1;

void dfs(int node)
{
    visited_order[node] = order++;
    
    for (int next : graph[node])
        if (visited_order[next] == 0) dfs(next);
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m, r;
    std::cin >> n >> m >> r;
    
    graph.resize(n + 1);
    visited_order.resize(n + 1, 0);
    
    int u, v;
    for (int i = 0; i < m; i++)
    {
        std::cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    for (int i = 1; i <= n; i++)
        std::sort(graph[i].begin(), graph[i].end());
    
    dfs(r);
    
    for (int i = 1; i <= n; i++)
        std::cout << visited_order[i] << '\n';
}