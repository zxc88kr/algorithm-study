#include <iostream>
#include <vector>

std::vector<std::vector<int>> graph;
std::vector<bool> visited;

void dfs(int n)
{
    for (int next : graph[n])
        if (!visited[next])
        {
            visited[next] = true;
            dfs(next);
        }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
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
    
    int count = 0;
    for (int i = 1; i <= n; i++)
        if (!visited[i])
        {
            count++;
            dfs(i);
        }
    std::cout << count;
}