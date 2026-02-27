#include <iostream>
#include <string>

int movie[64][64];

std::string solve(int x, int y, int n)
{
    int sum = 0;
    for (int i = x; i < x + n; i++)
        for (int j = y; j < y + n; j++)
            sum += movie[i][j];
    
    if (sum == 0) return "0";
    else if (sum == n * n) return "1";
    
    int half = n / 2;
    return "(" + solve(x, y, half)
               + solve(x, y + half, half)
               + solve(x + half, y, half)
               + solve(x + half, y + half, half) + ")";
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    char c;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            std::cin >> c;
            movie[i][j] = c - '0';
        }
    
    std::cout << solve(0, 0, n);
}