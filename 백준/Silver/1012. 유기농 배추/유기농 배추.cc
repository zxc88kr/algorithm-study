#include <iostream>
#include <vector>
#include <utility>

std::vector<std::vector<int>> field;

std::vector<int> dx = { 0, 0, -1, 1 };
std::vector<int> dy = { -1, 1, 0, 0 };

int n, m;
int count = 0;

void dfs(int x, int y)
{
    field[x][y]++;
    
    for (int i = 0; i < 4; i++)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];
        
        if (xx >= 0 && xx < n && yy >= 0 && yy < m && field[xx][yy] == 1)
            dfs(xx, yy);
    }
}

int main()
{
    int t;
    std::cin >> t;
    
    for (int loop = 0; loop < t; loop++)
    {
        int k;
        std::cin >> m >> n >> k;
        
        field.assign(n, std::vector<int>(m, 0));
        count = 0;
        
        std::vector<std::pair<int, int>> cabbage(k);
        for (int i = 0; i < k; i++)
        {
            std::cin >> cabbage[i].second >> cabbage[i].first;
            field[cabbage[i].first][cabbage[i].second] = 1;
        }
        
        for (int i = 0; i < cabbage.size(); i++)
            if (field[cabbage[i].first][cabbage[i].second] == 1)
            {
                dfs(cabbage[i].first, cabbage[i].second);
                count++;
            }
        std::cout << count << '\n';
    }
}