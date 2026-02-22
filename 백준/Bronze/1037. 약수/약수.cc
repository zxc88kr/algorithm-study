#include <cstdio>

int main()
{
    int N;
    scanf("%d", &N);
    
    int max = 1;
    int min = 1000001;
    for (int i = 0; i < N; i++)
    {
        int temp;
        scanf("%d", &temp);
        if (temp > max) max = temp;
        if (temp < min) min = temp;
    }
    printf("%d", min * max);
}