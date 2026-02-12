#include <cstdio>

int main()
{
    int num;
    scanf("%d", &num);
    
    int count = -1;
    for (int i = 0; i < 3; i++)
    {
        int res = (num % 5) + (5 * i);
        if ((res <= num) && (res % 3 == 0))
        {
            count = ((num / 5) - i) + (res / 3);
            break;
        }
    }
    printf("%d", count);
}