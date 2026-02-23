#include <iostream>
#include <vector>

void star(std::vector<std::vector<char>>& arr, int x, int y, int n)
{
    if (n == 1) return;
    
    int size = n / 3;
    for (int i = x + size; i < x + size * 2; i++)
        for (int j = y + size; j < y + size * 2; j++)
            arr[i][j] = ' ';
    
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (!(i == 1 && j == 1))
                star(arr, x + i * size, y + j * size, size);
}

int main()
{
    int n;
    std::cin >> n;
    
    std::vector<std::vector<char>> arr(n, std::vector<char>(n, '*'));
    star(arr, 0, 0, n);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            std::cout << arr[i][j];
        std::cout << '\n';
    }
}