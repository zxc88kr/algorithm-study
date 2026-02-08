#include <cstdio>

bool isPrime(int num)
{
    if (num == 1) return false;
    if (num == 2) return true;
    
    for (int i = 2; i <= num / 2; i++)
        if (num % i == 0) return false;
    return true;
}

int main()
{
    int loop;
    scanf("%d", &loop);
    
    int count = 0;
    for (int i = 0; i < loop; i++)
    {
        int temp;
        scanf("%d", &temp);
        if (isPrime(temp)) count++;
    }
    printf("%d", count);
}