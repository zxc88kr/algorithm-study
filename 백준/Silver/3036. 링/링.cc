#include <cstdio>

int gcd(int a, int b)
{
    int c = a % b;
    while (c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int main()
{
    int N, first;
    scanf("%d %d", &N, &first);
    for (int i = 0; i < N - 1; i++)
    {
        int ring;
        scanf("%d", &ring);
        
        int g = gcd(first, ring);
        printf("%d/%d\n", first / g, ring / g);
    }
}