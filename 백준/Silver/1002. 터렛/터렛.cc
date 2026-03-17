#include <cstdio>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++)
    {
        int x1, y1, r1, x2, y2, r2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        
        int d = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
        int d1 = (r1 - r2) * (r1 - r2);
        int d2 = (r1 + r2) * (r1 + r2);
        
        if (d >= d1 && d <= d2)
        {
            if (d == 0 && r1 == r2)      printf("-1\n");
            else if (d == d1 || d == d2) printf("1\n");
            else                         printf("2\n");
        }
        else printf("0\n");
    }
}