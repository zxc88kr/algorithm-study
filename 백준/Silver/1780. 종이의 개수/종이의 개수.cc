#include <iostream>

int paper[2187][2187];
int cnt[3];

bool check(int x, int y, int n)
{
    for (int i = x; i < x + n; i++)
        for (int j = y; j < y + n; j++)
            if (paper[i][j] != paper[x][y]) return false;
    return true;
}

void solve(int x, int y, int n)
{
    if (check(x, y, n))
    {
        cnt[paper[x][y] + 1]++;
        return;
    }

    n /= 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            solve(x + i * n, y + j * n, n);
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            std::cin >> paper[i][j];
    solve(0, 0, n);
    
    std::cout << cnt[0] << '\n' << cnt[1] << '\n' << cnt[2];
}