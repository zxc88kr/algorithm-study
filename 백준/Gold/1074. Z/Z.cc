#include <iostream>
#include <vector>
#include <cmath>

int n, r, c;
int order = 0;

void solve(int x, int y, int size)
{
    if (size == 1)
    {
        if (x == r && y == c) std::cout << order;
        return;
    }
    
    int half = size / 2;
    
    if ((r < x + half) && (c < y + half))
    {
        solve(x, y, half);
    }
    else if ((r < x + half) && (c >= y + half))
    {
        order += half * half;
        solve(x, y + half, half);
    }
    else if ((r >= x + half) && (c < y + half))
    {
        order += 2 * half * half;
        solve(x + half, y, half);
    }
    else if ((r >= x + half) && (c >= y + half))
    {
        order += 3 * half * half;
        solve(x + half, y + half, half);
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::cin >> n >> r >> c;
    
    int size = std::pow(2, n);
    solve(0, 0, size);
}