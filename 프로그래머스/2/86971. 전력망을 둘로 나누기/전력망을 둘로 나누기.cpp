#include <vector>
#include <queue>
#include <cmath>
#include <iostream> //

int solution(int n, std::vector<std::vector<int>> wires)
{
    std::vector<std::vector<bool>> connected(n + 1, std::vector<bool>(n + 1, false));
    
    for (std::vector<int>& w : wires)
        connected[w[0]][w[1]] = connected[w[1]][w[0]] = true;
    
    int answer = n;
    
    for (std::vector<int>& w : wires)
    {
        connected[w[0]][w[1]] = connected[w[1]][w[0]] = false;
        
        std::vector<bool> visited(n + 1, false);
        
        int count = 0;
        std::queue<int> q;
        
        visited[1] = true;
        q.push(1);
        
        while (!q.empty())
        {
            int cur = q.front();
            q.pop();
            
            count++;
            
            for (int next = 1; next <= n; next++)
                if (!visited[next] && connected[cur][next])
                {
                    visited[next] = true;
                    q.push(next);
                }
        }
        answer = std::min(answer, std::abs(2 * count - n));
        
        connected[w[0]][w[1]] = connected[w[1]][w[0]] = true;
    }
    
    return answer;
}