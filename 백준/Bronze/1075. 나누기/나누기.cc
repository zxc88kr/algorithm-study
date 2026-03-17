#include <cstdio>

int main()
{
    int N, F;
    scanf("%d %d", &N, &F);
    
    int result = 0;
    for (int i = 0; i < 100; i++)
    {
        int origin = (N / 100) * 100;
        if ((origin + i) % F == 0)
        {
            result = i;
            break;
        }
    }
    printf("%02d", result);
}