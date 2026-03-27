#include <vector>
#include <queue>
#include <utility>

std::vector<int> solution(int m, int n, std::vector<std::vector<int>> picture)
{
    int count = 0;
    int max = 0;

    int dx[4] = { 0, 0, -1, 1 };
    int dy[4] = { -1, 1, 0, 0 };

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (picture[i][j] != 0)
            {
                count++;

                int color = picture[i][j];

                std::queue<std::pair<int, int>> q;

                q.push({i, j});
                picture[i][j] = 0;

                int paint = 1;

                while (!q.empty())
                {
                    int x = q.front().first;
                    int y = q.front().second;

                    q.pop();

                    for (int k = 0; k < 4; k++)
                    {
                        int nx = x + dx[k];
                        int ny = y + dy[k];

                        if (nx < 0 || ny < 0 || nx >= m || ny >= n) continue;

                        if (picture[nx][ny] == color)
                        {
                            q.push({nx, ny});
                            picture[nx][ny] = 0;
                            paint++;
                        }
                    }
                }

                if (paint > max) max = paint;
            }

    std::vector<int> answer(2);
    answer[0] = count;
    answer[1] = max;
    return answer;
}