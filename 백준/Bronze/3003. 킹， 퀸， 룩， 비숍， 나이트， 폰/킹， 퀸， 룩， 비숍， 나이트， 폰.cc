#include <cstdio>

int main()
{
    int x[6] = { 1, 1, 2, 2, 2, 8 };
    int y[6];
    
    for (int i = 0; i < 6; i++)
        scanf("%d", &y[i]);

    for (int i = 0; i < 6; i++)
        printf("%d ", x[i] - y[i]);
}