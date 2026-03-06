#include <iostream>
#include <vector>

std::vector<std::vector<std::pair<int, int>>> graph;
std::vector<int> visited;

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
    
    int v;
    std::cin >> v;
    
    graph.resize(v + 1);
    visited.assign(v + 1, false);
    
    for (int i = 0; i < v; i++)
    {
        int a;
        std::cin >> a;
        
        while (true)
        {
            int b;
            std::cin >> b;
            
            if (b == -1) break;
            
            int c;
            std::cin >> c;
            
            graph[a].push_back({b, c});
            graph[b].push_back({a, c});
        }
    }
    
    dfs(1, 0);
    
    visited.assign(v + 1, false);
    max_dist = 0;
    
    dfs(far_node, 0);
    
    std::cout << max_dist;
}