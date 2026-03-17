#include <cstdio>

int main()
{
    int com[1001][1001] = { 0, };
    for (int n = 1; n <= 1000; n++)
    {
        com[n][0] = 1;
        com[n][1] = n;
        com[n][n] = 1;
    }
    for (int n = 3; n <= 1000; n++)
        for (int k = 2; k <= n - 1; k++)
            com[n][k] = (com[n - 1][k - 1] + com[n - 1][k]) % 10007;
    
    int N, K;
    scanf("%d %d", &N, &K);
    printf("%d", com[N][K]);
}