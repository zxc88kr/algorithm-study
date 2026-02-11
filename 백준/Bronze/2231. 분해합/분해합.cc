#include <cstdio>

int main()
{
    int num;
    scanf("%d", &num);
    
    int generator = num;
    for (int i = num - 1; i >= num - 54; i--)
    {
        if (i <= 0) break;

        int sum = i;
        int idx = i;
        while (idx > 0)
        {
            sum += (idx % 10);
            idx /= 10;
        }
        if (sum == num) generator = i;
    }
    if (generator == num) printf("0");
    else printf("%d", generator);
}