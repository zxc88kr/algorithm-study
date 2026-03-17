#include <cstdio>

int main()
{
    int now_h, now_m, now_s, cook_s;
    scanf("%d %d %d %d", &now_h, &now_m, &now_s, &cook_s);
    
    int total, total_h, total_m, total_s;
    total = (now_h * 3600) + (now_m * 60) + now_s + cook_s;
    total_h = (total / 3600) % 24;
    total_m = (total % 3600) / 60;
    total_s = total % 60;
    
    printf("%d %d %d", total_h, total_m, total_s);
}