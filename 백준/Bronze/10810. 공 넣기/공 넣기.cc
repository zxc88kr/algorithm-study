#include <cstdio>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    
    int basket[N] = { 0, };
    for (int loop = 0; loop < M; loop++)
    {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);
        for (int idx = i; idx <= j; idx++)
            basket[idx - 1] = k;
    }
    for (int i = 0; i < N; i++)
        printf("%d ", basket[i]);
}