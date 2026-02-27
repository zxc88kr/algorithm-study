#include <iostream>

int paper[128][128];
int white, blue; 

void solve(int x, int y, int size)
{    
    int sum = 0;
    for (int i = x; i < x + size; i++)
        for (int j = y; j < y + size; j++)
            sum += paper[i][j];
    
    if (sum == 0)
    {
        white++;
        return;
    }
    else if (sum == size * size)
    {
        blue++;
        return;
    }
    
    int half = size / 2;
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