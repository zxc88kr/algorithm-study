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
    std::vector<int> indegree(n + 1);
    
    int a, b;
    for (int i = 0; i < m; i++)
    {
        std::cin >> a >> b;
        graph[a].push_back(b);
        indegree[b]++;
    }
    
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
    
    for (int i = 1; i <= n; i++)
        if (indegree[i] == 0) pq.push(i);
    
    while (!pq.empty())
    {
        int cur = pq.top();
        pq.pop();
        
        std::cout << cur << ' ';
        
        for (int next : graph[cur])
        {
            indegree[next]--;
            if (indegree[next] == 0) pq.push(next);
        }
    }
}