#include <cstdio>

int main()
{
    int result = 1;
    for (int i = 0; i < 3; i++)
    {
        int number;
        scanf("%d", &number);
        result *= number;
    }
    
    int num[10] = { 0, };
    while (result != 0)
    {
        num[result % 10] += 1;
        result /= 10;
    }
    
    for (int i = 0; i < 10; i++)
        printf("%d\n", num[i]);
}