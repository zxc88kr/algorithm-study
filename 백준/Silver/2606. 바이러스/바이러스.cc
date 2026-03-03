#include <iostream>
#include <vector>

std::vector<std::vector<int>> graph;
std::vector<bool> visited;

void dfs(int node)
{
    visited[node] = true;
    for (int next : graph[node])
        if (!visited[next]) dfs(next);
}

int main()
{
    int n, m;
    std::cin >> n >> m;
    
    graph.resize(n + 1);
    visited.resize(n + 1, false);
    
    int u, v;
    for (int i = 0; i < m; i++)
    {
        std::cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    dfs(1);
    
    int affected = 0;
    for (int i = 2; i <= n; i++)
        if (visited[i]) affected++;
    std::cout << affected;
}