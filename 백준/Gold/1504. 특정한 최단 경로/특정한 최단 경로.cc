#include <iostream>
#include <vector>
#include <utility>
#include <queue>
#include <climits>
#include <cmath>

std::vector<std::vector<std::pair<int, int>>> graph;

std::vector<int> solve(int start, int size)
{
    std::priority_queue<std::pair<int, int>
        , std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;
    std::vector<int> dist(size + 1, INT_MAX);
    
    dist[start] = 0;
    pq.push({0, start});
    
    while (!pq.empty())
    {
        int cd = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        
        if (cd > dist[u]) continue;
        
        for (auto& p : graph[u])
        {
            int v = p.first;
            int w = p.second;
            int nd = cd + w;
            
            if (nd < dist[v])
            {
                dist[v] = nd;
                pq.push({nd, v});
            }
        }
    }
    
    return dist;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int N, E;
    std::cin >> N >> E;
    
    graph.resize(N + 1);
    
    int a, b, c;
    for (int i = 0; i < E; i++)
    {
        std::cin >> a >> b >> c;
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }
    
    int v1, v2;
    std::cin >> v1 >> v2;
    
    std::vector<int> dist_1 = solve(1, N);
    std::vector<int> dist_v1 = solve(v1, N);
    std::vector<int> dist_v2 = solve(v2, N);
    
    long long sum1 = (long long)dist_1[v1] + dist_v1[v2] + dist_v2[N];
    long long sum2 = (long long)dist_1[v2] + dist_v2[v1] + dist_v1[N];
    
    long long answer = std::min(sum1, sum2);
    if (answer >= INT_MAX) answer = -1;
    
    std::cout << answer;
}