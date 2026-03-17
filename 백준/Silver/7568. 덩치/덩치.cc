#include <cstdio>

int main()
{
    int N;
    scanf("%d", &N);
    
    int x[N], y[N], rank[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
        rank[i] = 1;
    }
    
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            if (j == i) continue;
            if (x[j] > x[i] && y[j] > y[i]) rank[i]++;
        }
    
    for (int i = 0; i < N; i++)
        printf("%d ", rank[i]);
}