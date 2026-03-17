#include <cstdio>

int main()
{
    int loop;
    scanf("%d", &loop);
    for (int i = 0; i < loop; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
}