#include <cstdio>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        b = (b % 4) ? (b % 4) : 4;
        int remain = 1;
        for (int j = 0; j < b; j++)
            remain = (remain * a) % 10;
        if (remain == 0) remain = 10;
        printf("%d\n", remain);
    }
}