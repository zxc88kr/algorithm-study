#include <iostream>
#include <vector>
#include <queue>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int k;
    std::cin >> k;
    
    while (k--)
    {
        int n, m;
        std::cin >> n >> m;
        
        std::vector<std::vector<int>> graph(n + 1);
        std::vector<int> color(n + 1, 0);
        
        int u, v;
        for (int i = 0; i < m; i++)
        {
            std::cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        
        bool is_target_graph = true;
        
        for (int i = 1; i <= n; i++)
        {
            if (color[i] != 0) continue;
            
            if (!is_target_graph) break;
            
            std::queue<int> q;
            
            q.push(i);
            color[i] = 1;
            
            while (!q.empty() && is_target_graph)
            {
                int cur = q.front();
                q.pop();
                
                for (int next : graph[cur])
                {
                    if (color[next] == 0)
                    {
                        color[next] = -color[cur];
                        q.push(next);
                    }
                    else if (color[next] == color[cur])
                    {
                        is_target_graph = false;
                        break;
                    }
                }
            }
        }
        
        if (is_target_graph) std::cout << "YES\n";
        else std::cout << "NO\n";
    }
}