#include <iostream>
#include <vector>
#include <utility>

std::vector<std::pair<int, int>> blank;

int sudoku[9][9];

bool box[9][10];
bool row[9][10];
bool col[9][10];

bool flag;

void dfs(int solve)
{
    if (flag) return;
    if (solve == blank.size())
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
                std::cout << sudoku[i][j] << ' ';
            std::cout << '\n';
        }
        flag = true;
        return;
    }
    
    int i = blank[solve].first;
    int j = blank[solve].second;
    
    for (int x = 1; x <= 9; x++)
    {
        if (box[(i/3) * 3 + (j/3)][x] || row[i][x] || col[j][x]) continue;
        box[(i/3) * 3 + (j/3)][x] = row[i][x] = col[j][x] = true;
        sudoku[i][j] = x;
        dfs(solve + 1);
        sudoku[i][j] = 0;
        box[(i/3) * 3 + (j/3)][x] = row[i][x] = col[j][x] = false;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int x;
    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
        {
            std::cin >> x;
            if (x == 0)
            {
                blank.push_back({i, j});
                continue;
            }
            sudoku[i][j] = x;
            box[(i/3) * 3 + (j/3)][x] = row[i][x] = col[j][x] = true;
        }
    
    dfs(0);
}