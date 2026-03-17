#include <cstdio>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    
    bool not_prime[n + 1] = { false, };
    
    not_prime[0] = true;
    not_prime[1] = true;
    
    for (int i = 2; i * i <= n; i++)
        if (not_prime[i] == false)
            for (int j = 2 * i; j <= n; j += i)
                not_prime[j] = true;
    
    for (int i = m; i <= n; i++)
        if (not_prime[i] == false) printf("%d\n", i);
}