#include <vector>
#include <queue>
#include <algorithm>

int solution(int n, std::vector<std::vector<int>> edge)
{
    std::vector<std::vector<int>> graph(n + 1, std::vector<int>());
    
    for (auto& e : edge)
    {
        graph[e[0]].push_back(e[1]);
        graph[e[1]].push_back(e[0]);
    }
    
    std::vector<int> dist(n + 1, -1);
    std::queue<int> q;
    
    dist[1] = 0;
    q.push(1);
    
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        
        for (int next : graph[cur])
            if (dist[next] == -1)
            {
                dist[next] = dist[cur] + 1;
                q.push(next);
            }
    }
    
    int dist_max = *std::max_element(dist.begin(), dist.end());
    
    int answer = 0;
    for (int x : dist)
        if (x == dist_max) answer++;
    
    return answer;
}