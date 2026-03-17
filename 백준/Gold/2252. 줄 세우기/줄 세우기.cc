#include <iostream>
#include <vector>
#include <queue>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m;
    std::cin >> n >> m;
    
    std::vector<std::vector<int>> graph(n + 1);
    std::vector<int> degree(n + 1, 0);
    
    int a, b;
    for (int i = 0; i < m; i++)
    {
        std::cin >> a >> b;
        graph[a].push_back(b);
        degree[b]++;
    }
    
    std::queue<int> q;
    
    for (int i = 1; i <= n; i++)
        if (degree[i] == 0) q.push(i);
    
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        
        std::cout << cur << ' ';
        
        for (int child : graph[cur])
        {
            degree[child]--;
            if (degree[child] == 0) q.push(child);
        }
    }
}