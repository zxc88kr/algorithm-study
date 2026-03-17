#include <iostream>
#include <vector>
#include <queue>
#include <utility>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m, h;
    std::cin >> m >> n >> h;
    
    std::vector<std::vector<std::vector<int>>>
        shelf(n, std::vector<std::vector<int>>(m, std::vector<int>(h)));
    
    std::queue<std::pair<std::pair<int, int>, int>> q;
    int left = 0;
    
    for (int k = 0; k < h; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                std::cin >> shelf[i][j][k];
                if (shelf[i][j][k] == 0) left++;
                if (shelf[i][j][k] == 1) q.push({{i, j}, k});
            }
    
    int dx[6] = { 0, 0, -1, 1, 0, 0 };
    int dy[6] = { -1, 1, 0, 0, 0, 0 };
    int dz[6] = { 0, 0, 0, 0, -1, 1 };
    
    int day = -1;
    while (!q.empty())
    {
        int size = q.size();
        for (int loop = 0; loop < size; loop++)
        {
            int x = q.front().first.first;
            int y = q.front().first.second;
            int z = q.front().second;
            q.pop();
            
            for (int i = 0; i < 6; i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];
                int nz = z + dz[i];
                
                if (nx >= 0 && nx < n && ny >= 0 && ny < m && nz >= 0 && nz < h
                    && shelf[nx][ny][nz] == 0)
                {
                    left--;
                    shelf[nx][ny][nz] = 1;
                    q.push({{nx, ny}, nz});
                }
            }
        }
        day++;
    }
    if (left > 0) std::cout << -1;
    else std::cout << day;
}