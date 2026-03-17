#include <cstdio>

int main()
{
    int loop;
    scanf("%d", &loop);
    for (int i = 1; i <= loop; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
    }
}