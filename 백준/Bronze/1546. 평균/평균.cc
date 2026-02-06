#include <cstdio>

int main()
{
    int sub;
    scanf("%d", &sub);
    
    int num[sub];
    int sum = 0;
    int max = 0;
    for (int i = 0; i < sub; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
        if (num[i] > max) max = num[i];
    }
    printf("%lf", (double)sum / (max * sub) * 100);
}