#include <iostream>
#include <vector>
#include <queue>
#include <utility>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    std::cin >> t;
    
    std::vector<int> dx = { -2, -1, 1, 2, 2, 1, -1, -2 };
    std::vector<int> dy = { 1, 2, 2, 1, -1, -2, -2, -1 };
    
    for (int loop = 0; loop < t; loop++)
    {
        int l;
        std::cin >> l;
        
        int start_x, start_y, end_x, end_y;
        std::cin >> start_x >> start_y >> end_x >> end_y;
        
        std::vector<std::vector<int>> board(l, std::vector<int>(l, -1));
        std::queue<std::pair<int, int>> q;

        board[start_x][start_y] = 0;
        q.push({start_x, start_y});
        
        while (!q.empty())
        {
            int cur_x = q.front().first;
            int cur_y = q.front().second;
            q.pop();
            
            if (cur_x == end_x && cur_y == end_y) break;
            
            for (int i = 0; i < 8; i++)
            {
                int next_x = cur_x + dx[i];
                int next_y = cur_y + dy[i];
                
                if (next_x >= 0 && next_x <= l - 1
                    && next_y >= 0 && next_y <= l - 1
                    && board[next_x][next_y] == -1)
                {
                    board[next_x][next_y] = board[cur_x][cur_y] + 1;
                    q.push({next_x, next_y});
                }
            }
        }
        
        std::cout << board[end_x][end_y] << '\n';
    }
}