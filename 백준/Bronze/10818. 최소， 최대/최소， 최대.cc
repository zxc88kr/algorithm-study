#include <cstdio>

int main()
{
    int length;
    scanf("%d", &length);
    
    int num[length];
    int min = 1000000;
    int max = -1000000;
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &num[i]);
        min = (num[i] < min ? num[i] : min);
        max = (num[i] > max ? num[i] : max);
    }
    printf("%d %d", min, max);
}