#include <iostream>

int main()
{
    int n, m, k;

    std::cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            std::cin >> a[i][j];

    std::cin >> m >> k;
    int b[m][k];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < k; j++)
            std::cin >> b[i][j];

    int c[100][100] = { 0, };
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            for (int l = 0; l < m; l++)
                c[i][j] += a[i][l] * b[l][j];
            std::cout << c[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}