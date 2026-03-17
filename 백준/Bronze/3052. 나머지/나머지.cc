#include <cstdio>

int main()
{
    int remain[42] = { 0, };
    for (int i = 0; i < 10; i++)
    {
        int num;
        scanf("%d", &num);
        num %= 42;
        remain[num] = 1;
    }
    
    int count = 0;
    for (int i = 0; i < 42; i++)
        if (remain[i] == 1) count++;
    printf("%d", count);
}