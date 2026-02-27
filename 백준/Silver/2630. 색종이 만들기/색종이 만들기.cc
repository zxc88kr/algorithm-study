#include <iostream>

int paper[128][128];
int white, blue; 

void solve(int x, int y, int n)
{    
    int sum = 0;
    for (int i = x; i < x + n; i++)
        for (int j = y; j < y + n; j++)
            sum += paper[i][j];
    
    if (sum == 0)
    {
        white++;
        return;
    }
    else if (sum == n * n)
    {
        blue++;
        return;
    }
    
    int half = n / 2;
    solve(x, y, half);
    solve(x, y + half, half);
    solve(x + half, y, half);
    solve(x + half, y + half, half);
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
    std::cout << white << '\n' << blue;
}