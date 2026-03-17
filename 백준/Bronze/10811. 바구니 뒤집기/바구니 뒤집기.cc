#include <cstdio>
#include <algorithm>

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
        
        for (int k = 0; k <= (j - i) / 2; k++)
            std::swap(basket[i + k], basket[j - k]);
    }
    
    for (int i = 1; i <= N; i++)
        printf("%d ", basket[i]);
}