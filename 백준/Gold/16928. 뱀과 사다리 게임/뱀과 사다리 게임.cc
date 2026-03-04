#include <iostream>
#include <vector>
#include <queue>

int main()
{
    int n, m;
    std::cin >> n >> m;
    
    std::vector<int> graph(101, 0);
    std::vector<int> board(101, -1);

    int u, v;
    for (int i = 0; i < n; i++)
    {
        std::cin >> u >> v;
        graph[u] = v;
    }
    for (int i = 0; i < m; i++)
    {
        std::cin >> u >> v;
        graph[u] = v;
    }
    
    std::queue<int> q;
    
    q.push(1);
    board[1] = 0;
    
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        
        if (x == 100) break;
        
        for (int i = 1; i <= 6; i++)
        {
            int next = x + i;
            
            if (next > 100) continue;
            
            if (graph[next] > 0) next = graph[next];
            
            if (board[next] == -1)
            {
                board[next] = board[x] + 1;
                q.push(next);
            }
        }
    }
    
    std::cout << board[100];
}