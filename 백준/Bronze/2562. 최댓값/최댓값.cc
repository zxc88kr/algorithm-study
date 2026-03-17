#include <cstdio>

int main()
{
    int num[9];
    int max = 0;
    int index = 0;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] > max)
        {
            max = num[i];
            index = i + 1;
        }
    }
    printf("%d\n%d", max, index);
}