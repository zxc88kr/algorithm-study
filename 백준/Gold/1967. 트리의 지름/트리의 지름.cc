#include <iostream>
#include <vector>
#include <utility>

std::vector<std::vector<std::pair<int, int>>> graph;
std::vector<bool> visited;

int far_node = 0;
int max_dist = 0;

void dfs(int cur, int dist)
{
    visited[cur] = true;
    
    if (dist > max_dist)
    {
        max_dist = dist;
        far_node = cur;
    }
    
    for (auto& next : graph[cur])
        if (!visited[next.first])
            dfs(next.first, dist + next.second);
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    graph.resize(n + 1);
    visited.assign(n + 1, false);
    
    int u, v, w;
    for (int i = 0; i < n - 1; i++)
    {
        std::cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    
    dfs(1, 0);
    
    visited.assign(n + 1, false);
    max_dist = 0;
    
    dfs(far_node, 0);
    
    std::cout << max_dist;
}