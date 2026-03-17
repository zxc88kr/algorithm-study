#include <cstdio>

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);
    
    int count = 0;
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0) count++;
        
        if (count == K)
        {
            printf("%d", i);
            break;
        }
    }
    if (count < K) printf("0");
}