#include <cstdio>

long long gol(long long n1, long long n2)
{
    return (n1 + n2) * (n1 - n2);
}

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", gol(a, b));
}