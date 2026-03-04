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
        int n;
        std::cin >> n;
        
        std::vector<int> rank(n);
        for (int i = 0; i < n; i++)
            std::cin >> rank[i];
        
        std::vector<std::vector<bool>> graph(n + 1, std::vector<bool>(n + 1, false));
        std::vector<int> indegree(n + 1, 0);
        
        for (int i = 0; i < n - 1; i++)
            for (int j = i + 1; j < n; j++)
            {
                graph[rank[i]][rank[j]] = true;
                indegree[rank[j]]++;
            }
        
        int m;
        std::cin >> m;
        
        int a, b;
        for (int i = 0; i < m; i++)
        {
            std::cin >> a >> b;
            
            if (graph[a][b])
            {
                graph[a][b] = false;
                graph[b][a] = true;
                indegree[b]--;
                indegree[a]++;
            }
            else if (graph[b][a])
            {
                graph[b][a] = false;
                graph[a][b] = true;
                indegree[a]--;
                indegree[b]++;
            }
        }
        
        std::queue<int> q;
        for (int i = 1; i <= n; i++)
            if (indegree[i] == 0) q.push(i);
        
        std::vector<int> result(n);
        bool is_ambiguous = false;
        bool is_impossible = false;
        
        for (int i = 0; i < n; i++)
        {
            if (q.empty())
            {
                is_impossible = true;
                break;
            }
            
            if (q.size() > 1)
            {
                is_ambiguous = true;
                break;
            }
            
            int cur = q.front();
            q.pop();
            result[i] = cur;
            
            for (int next = 1; next <= n; next++)
                if (graph[cur][next])
                {
                    indegree[next]--;
                    if (indegree[next] == 0) q.push(next);
                }
        }
        
        if (is_ambiguous) std::cout << "?\n";
        else if (is_impossible) std::cout << "IMPOSSIBLE\n";
        else
        {
            for (int x : result)
                std::cout << x << ' ';
            std::cout << '\n';
        }
    }
}