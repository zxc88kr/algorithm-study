#include <iostream>
#include <vector>
#include <queue>
#include <utility>

int main()
{
    int n, m;
    std::cin >> n >> m;
    
    std::vector<std::vector<char>> campus(n, std::vector<char>(m));
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            std::cin >> campus[i][j];
    
    std::queue<std::pair<int,int>> q;
    
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < m; j++)
            if (campus[i][j] == 'I')
            {
                campus[i][j] = 'X';
                q.push({ i, j });
                flag = false;
                break;
            }
        if (!flag) break;
    }
    
    int dx[4] = { -1, 1, 0, 0 };
    int dy[4] = { 0, 0, -1, 1 };
    
    int meet = 0;
    
    while (!q.empty())
    {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++)
        {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            
            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            
            if (campus[nx][ny] != 'X')
            {
                if (campus[nx][ny] == 'P') meet++;
                
                campus[nx][ny] = 'X';
                q.push({ nx, ny });
            }
        }
    }
    
    if (meet == 0) std::cout << "TT";
    else std::cout << meet;
}