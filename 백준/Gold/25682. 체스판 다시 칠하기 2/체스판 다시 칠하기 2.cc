#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m, k;
    std::cin >> n >> m >> k;
    
    std::vector<std::vector<int>> b_board(n + 1, std::vector<int>(m + 1, 0));
    std::vector<std::vector<int>> w_board(n + 1, std::vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            char target;
            if ((i + j) % 2 == 0) target = 'B';
            else target = 'W';
            
            char ch;
            std::cin >> ch;
            
            if (ch == target) b_board[i][j] = 1;
            else b_board[i][j] = 0;
            w_board[i][j] = b_board[i][j] ^ 1;
            
            b_board[i][j] += b_board[i][j - 1] + b_board[i - 1][j] - b_board[i - 1][j - 1];
            w_board[i][j] += w_board[i][j - 1] + w_board[i - 1][j] - w_board[i - 1][j - 1];
        }
    
    int min_change = n * m;
    for (int i = k; i <= n; i++)
        for (int j = k; j <= m; j++)
        {
            int change1 = b_board[i][j] - b_board[i][j - k] - b_board[i - k][j] + b_board[i - k][j - k];
            int change2 = w_board[i][j] - w_board[i][j - k] - w_board[i - k][j] + w_board[i - k][j - k];
            
            min_change = std::min(min_change, std::min(change1, change2));
        }
    std::cout << min_change;
}