#include <cstdio>

int gcd(int a, int b) {
    int c = a % b;
    while (c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int A, B;
        scanf("%d %d", &A, &B);
        printf("%d\n", lcm(A, B));
    }
}