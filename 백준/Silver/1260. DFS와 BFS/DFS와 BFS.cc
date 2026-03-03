#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

std::vector<std::vector<int>> graph;
std::vector<bool> visited;

void dfs(int node)
{
    visited[node] = true;
    std::cout << node << ' ';
    
    for (int next : graph[node])
        if (!visited[next]) dfs(next);
}

void bfs(int start)
{
    std::queue<int> q;
    
    q.push(start);
    std::cout << start << ' ';
    visited[start] = true;
    
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        
        for (int next : graph[cur])
            if (!visited[next])
            {
                q.push(next);
                std::cout << next << ' ';
                visited[next] = true;
            }
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m, r;
    std::cin >> n >> m >> r;
    
    graph.resize(n + 1);
    visited.resize(n + 1, false);
    
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
    
    visited.assign(n + 1, false);
    std::cout << '\n';
    
    bfs(r);
}