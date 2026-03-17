#include <cstdio>

int main()
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        int digit;
        scanf("%d", &digit);
        sum += (digit * digit);
    }
    printf("%d", sum % 10);
}