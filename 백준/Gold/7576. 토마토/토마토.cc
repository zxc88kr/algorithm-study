#include <iostream>
#include <vector>
#include <utility>
#include <queue>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m;
    std::cin >> m >> n;
    
    std::vector<std::vector<int>> shelf(n, std::vector<int>(m, -1));
    
    std::queue<std::pair<int, int>> q;
    int left = 0;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            std::cin >> shelf[i][j];
            if (shelf[i][j] == 0) left++;
            else if (shelf[i][j] == 1) q.push({i, j});
        }
    
    std::vector<int> dx = { 0, 0, -1, 1 };
    std::vector<int> dy = { -1, 1, 0, 0 };
    
    int day = -1;
    while (!q.empty())
    {
        int size = q.size();
        for (int step = 0; step < size; step++)
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            for (int i = 0; i < 4; i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];
                
                if (nx >= 0 && nx < n && ny >= 0 && ny < m && shelf[nx][ny] == 0)
                {
                    shelf[nx][ny] = 1;
                    q.push({nx, ny});
                    left--;
               }
            }
        }
        day++;
    }
    if (left > 0) std::cout << -1;
    else std::cout << day;
}