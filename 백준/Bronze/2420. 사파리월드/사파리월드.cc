#include <cstdio>

int main()
{
    long long a, b, diff;
    scanf("%lld %lld", &a, &b);
    
    diff = (a - b > 0) ? (a - b) : (b - a);
    printf("%lld", diff);
}