#include <cstdio>

int main()
{
    int N;
    scanf("%d", &N);
    
    int count = 0;
    for (int i = N; i >= 1; i--)
    {
        int k = i;
        while (k % 5 == 0)
        {
            count++;
            k /= 5;
        }
    }
    printf("%d", count);
}