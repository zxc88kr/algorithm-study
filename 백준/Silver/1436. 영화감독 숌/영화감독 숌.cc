#include <cstdio>

int main()
{
    int N;
    scanf("%d", &N);

    int i = 0;
    while (N > 0)
    {
        i++;
        int num = i;
        while (num > 0)
        {
            if (num % 1000 == 666)
            {
                N--;
                break;
            }
            num /= 10;
        }
    }
    printf("%d", i);
}