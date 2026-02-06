#include <cstdio>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    
    int basket[N + 1];
    for (int i = 1; i <= N; i++)
        basket[i] = i;
    
    for (int loop = 0; loop < M; loop++)
    {
        int i, j;
        scanf("%d %d", &i, &j);
        int temp = basket[i];
        basket[i] = basket[j];
        basket[j] = temp;
    }
    
    for (int i = 1; i <= N; i++)
        printf("%d ", basket[i]);
}