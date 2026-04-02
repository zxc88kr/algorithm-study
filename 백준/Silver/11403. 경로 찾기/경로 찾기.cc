#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::vector<std::vector<int>> route(n, std::vector<int>(n));
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            std::cin >> route[i][j];
    
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (route[i][k] && route[k][j])
                    route[i][j] = 1;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            std::cout << route[i][j] << ' ';
        std::cout << '\n';
    }
}