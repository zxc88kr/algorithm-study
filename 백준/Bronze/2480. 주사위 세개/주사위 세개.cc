#include <cstdio>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    
    if ((x == y) && (x == z)) printf("%d", 10000 + (x * 1000));
    else if ((x == y) || (x == z)) printf("%d", 1000 + (x * 100));
    else if (y == z) printf("%d", 1000 + (y * 100));
    else
    {
        int max = ((x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z));
        printf("%d", max * 100);
    }
}