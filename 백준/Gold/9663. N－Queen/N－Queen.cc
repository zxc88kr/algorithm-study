#include <iostream>

bool visited[15];
bool check1[30];
bool check2[30];

int count;

void dfs(int row, int n)
{
    if (row == n)
    {
        count++;
        return;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (visited[i] || check1[row + i] || check2[row - i + n]) continue;
        visited[i] = check1[row + i] = check2[row - i + n] = true;
        dfs(row + 1, n);
        visited[i] = check1[row + i] = check2[row - i + n] = false;
    }
}

int main()
{
    int n;
    std::cin >> n;
    
    dfs(0, n);
    std::cout << count;
}