#include <cstdio>

int main()
{
    int com[30][30] = { 0, };
    for (int n = 1; n <= 29; n++)
        for (int k = 0; k <= 29; k++)
            if (n == k || k == 0) com[n][k] = 1;
    for (int n = 2; n <= 29; n++)
        for (int k = 1; k <= n; k++)
            com[n][k] = com[n - 1][k - 1] + com[n - 1][k];
    
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int N, M;
        scanf("%d %d", &N, &M);
        printf("%d\n", com[M][N]);
    }
}