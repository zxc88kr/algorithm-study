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
    int m, n;
    scanf("%d %d", &m, &n);
    
    int sum = 0;
    int min = 0;
    bool flag = true;
    
    for (int i = m; i <= n; i++)
    {
        if (isPrime(i))
        {
            if (flag)
            {
                min = i;
                flag = false;
            }
            sum += i;
        }
    }
    if (flag) printf("-1");
    else printf("%d\n%d", sum, min);
}