#include <vector>
#include <queue>

std::vector<std::vector<int>> connected;
std::vector<int> visited;

void bfs(int x)
{
    std::queue<int> q;
    
    visited[x] = true;
    q.push(x);
    
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        
        for (int next : connected[cur])
            if (!visited[next])
            {
                visited[next] = true;
                q.push(next);
            }
    }
}

int solution(int n, std::vector<std::vector<int>> computers)
{
    connected.resize(n, std::vector<int>());
    visited.assign(n, false);
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i != j && computers[i][j] == 1)
                connected[i].push_back(j);
    
    int group_count = 0;
    for (int i = 0; i < n; i++)
        if (!visited[i])
        {
            bfs(i);
            group_count++;
        }
    
    return group_count;
}