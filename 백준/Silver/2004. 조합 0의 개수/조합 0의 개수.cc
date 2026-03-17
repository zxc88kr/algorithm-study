#include <cstdio>

long long div_count(int num, int div)
{
    long long result = 0;
    for (long long i = div; i <= num; i *= div)
        result += (num / i);
    return result;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    
    long long two = div_count(n, 2) - div_count(m, 2) - div_count(n - m, 2);
    long long five = div_count(n, 5) - div_count(m, 5) - div_count(n - m, 5);
    
    long long min = (two > five) ? five : two;
    printf("%lld", min);
}