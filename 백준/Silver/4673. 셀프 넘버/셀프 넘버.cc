#include <cstdio>
#define SIZE 10000

int degree(int n)
{
    int sum = n;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    bool num[SIZE] = { false, };
    for (int i = 0; i < SIZE; i++)
    {
        if (num[i] == true) continue;

        int next = degree(i + 1);
        while (next <= SIZE)
        {
            num[next - 1] = true;
            next = degree(next);
        }
    }

    for (int i = 0; i < SIZE; i++)
        if (num[i] == false) printf("%d\n", i + 1);
}