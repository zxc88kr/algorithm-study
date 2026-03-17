#include <cstdio>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int result;
    if (a > b)
    {
        if (a > c)
        {
            if (b > c) result = b;
            else result = c;
        }
        else result = a;
    }
    else
    {
        if (b > c)
        {
            if (a > c) result = a;
            else result = c;
        }
        else result = b;
    }
    printf("%d", result);
}