#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m, k;

    std::cin >> n >> m;
    std::vector<std::vector<int>> a(n, std::vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            std::cin >> a[i][j];

    std::cin >> m >> k;
    std::vector<std::vector<int>> b(m, std::vector<int>(k));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < k; j++)
            std::cin >> b[i][j];

    std::vector<std::vector<int>> c(n, std::vector<int>(k));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            for (int l = 0; l < m; l++)
                c[i][j] += a[i][l] * b[l][j];
            std::cout << c[i][j] << ' ';
        }
        std::cout << '\n';
    }
}