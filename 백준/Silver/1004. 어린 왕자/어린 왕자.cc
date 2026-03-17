#include <cstdio>

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int x1, y1, x2, y2, n;
        scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &n);
        bool contain_1[n] = { false, };
        bool contain_2[n] = { false, };
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            int cx, cy, r;
            scanf("%d %d %d", &cx, &cy, &r);
            if ((cx - x1) * (cx - x1) + (cy - y1) * (cy - y1) < r * r)
                contain_1[j] = true;
            if ((cx - x2) * (cx - x2) + (cy - y2) * (cy - y2) < r * r)
                contain_2[j] = true;
            if (contain_1[j] != contain_2[j]) count++;
        }
        printf("%d\n", count);
    }
}