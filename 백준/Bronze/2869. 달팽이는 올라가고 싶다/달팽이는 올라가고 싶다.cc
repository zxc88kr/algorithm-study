#include <cstdio>
#include <cmath>

int main()
{
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);
    
    int day = ceil((double)(v - a) / (a - b) + 1);
    printf("%d", day);
}