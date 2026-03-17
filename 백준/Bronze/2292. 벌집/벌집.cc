#include <cstdio>

int main()
{
    int num;
    scanf("%d", &num);
    
    int sum = 1;
    int i = 1;
    while (sum < num)
    {
        sum += 6 * i;
        i++;
    }
    printf("%d", i);
}