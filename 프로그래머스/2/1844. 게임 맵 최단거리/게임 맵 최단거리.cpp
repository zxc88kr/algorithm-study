#include <vector>
#include <utility>
#include <queue>

int solution(std::vector<std::vector<int>> maps)
{
    int n = maps.size();
    int m = maps[0].size();
    
    std::queue<std::pair<int, int>> q;
    
    maps[0][0] = 0;
    q.push({0, 0});
    
    int count = 0;
    bool found = false;
    
    int dx[4] = { -1, 1, 0, 0 };
    int dy[4] = { 0, 0, -1, 1 };
    
    int answer = -1;
    
    while (!q.empty())
    {
        count++;
        int q_size = q.size();
        
        for (int k = 0; k < q_size; k++)
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            if (x == n - 1 && y == m - 1)
            {
                found = true;
                break;
            }

            for (int i = 0; i < 4; i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;

                if (maps[nx][ny] == 1)
                {
                    maps[nx][ny] = 0;
                    q.push({nx, ny});
                }
            }
        }
        if (found)
        {
            answer = count;
            break;
        }
    }
    return answer;
}