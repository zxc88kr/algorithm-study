#include <iostream>
#include <vector>

std::vector<std::vector<int>> graph;
std::vector<int> visited, result;

void dfs(int cur)
{
    for (int next : graph[cur])
        if (!visited[next])
        {
            visited[next] = true;
            result[next] = cur;
            dfs(next);
        }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    graph.resize(n + 1);
    visited.resize(n + 1);
    result.resize(n + 1);
    
    int a, b;
    for (int i = 0; i < n - 1; i++)
    {
        std::cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    visited[1] = true;
    dfs(1);
    
    for (int i = 2; i <= n; i++)
        std::cout << result[i] << '\n';
}