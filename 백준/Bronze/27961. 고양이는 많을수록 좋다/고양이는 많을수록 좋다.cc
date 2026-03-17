#include <cstdio>

int main()
{
    long long n;
    scanf("%lld", &n);

    long long cat = 1;
    int count = 1;
    while (cat < n)
    {
        cat *= 2;
        count++;
    }
    if (n == 0) printf("0");
    else        printf("%d", count);
}