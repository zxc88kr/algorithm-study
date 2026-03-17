#include <cstdio>

int main()
{
    int apart[15][14] = { 0, };
    for (int i = 0; i < 15; i++)
        apart[i][0] = 1;
    for (int i = 0; i < 14; i++)
        apart[0][i] = i + 1;
    for (int i = 1; i < 15; i++)
        for (int j = 1; j < 14; j++)
            apart[i][j] = apart[i - 1][j] + apart[i][j - 1];
    
    int test;
    scanf("%d", &test);
    
    for (int i = 0; i < test; i++)
    {
        int k, n;
        scanf("%d %d", &k, &n);
        printf("%d\n", apart[k][n - 1]);
    }
}