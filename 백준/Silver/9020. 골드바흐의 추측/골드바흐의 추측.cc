#include <cstdio>

int main()
{
    int test;
    scanf("%d", &test);
    
    for (int loop = 0; loop < test; loop++)
    {
        int n;
        scanf("%d", &n);
        
        bool not_prime[n + 1] = { false, };
        
        not_prime[0] = true;
        not_prime[1] = true;
        
        for (int i = 2; i * i <= n; i++)
            if (not_prime[i] == false)
                for (int j = 2 * i; j <= n; j += i)
                    not_prime[j] = true;
        
        for (int i = n / 2; i >= 2; i--)
            if (not_prime[i] == false && not_prime[n - i] == false)
            {
                printf("%d %d\n", i, n - i);
                break;
            }
    }
}