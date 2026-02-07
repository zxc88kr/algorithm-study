#include <cstdio>

int main()
{
    int num;
    scanf("%d", &num);
    
    int sum = 1;
    int i = 1;
    while (sum < num)
    {
        i++;
        sum += i;
    }
    
    int temp = sum - num;
    if ((i % 2) != 0)
        printf("%d/%d", temp + 1, i - temp);
    else
        printf("%d/%d", i - temp, temp + 1);
}