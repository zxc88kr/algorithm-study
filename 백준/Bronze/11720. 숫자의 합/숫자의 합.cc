#include <cstdio>

int main()
{
    int length;
    char num[100];
    scanf("%d %s", &length, num);

    int sum = 0;
    for (int i = 0; i < length; i++)
        sum += (int)num[i] - 48;
    printf("%d", sum);
}