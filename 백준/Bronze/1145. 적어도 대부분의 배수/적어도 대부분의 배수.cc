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

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int num[5];
    for (int i = 0; i < 5; i++)
        scanf("%d", &num[i]);
    
    int min = -1;
    for (int i = 0; i <= 2; i++)
        for (int j = i + 1; j <= 3; j++)
            for (int k = j + 1; k <= 4; k++)
            {
                int temp = lcm(lcm(num[i], num[j]), num[k]);
                if (min == -1 || temp < min) min = temp;
            }
    printf("%d", min);
}