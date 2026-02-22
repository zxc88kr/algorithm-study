#include <cstdio>

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);
    
    int loop = K;
    int result = 1;
    for (int i = 0; i < loop; i++)
        result *= N--;
    for (int i = 0; i < loop; i++)
        result /= K--;
    printf("%d", result);
}