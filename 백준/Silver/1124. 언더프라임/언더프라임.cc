#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::vector<bool> prime(20, true);
    prime[0] = prime[1] = false;
    
    for (int i = 2; i * i <= 20; i++)
        if (prime[i])
            for (int j = i * i; j < 20; j += i)
                prime[j] = false;
    
    int a, b;
    std::cin >> a >> b;

    int under_prime_count = 0;
    for (int i = a; i <= b; i++)
    {
        int prime_count = 0;
        int num = i;
        for (int j = 2; j * j <= i; j++)
            while (true)
            {
                if (num % j == 0)
                {
                    num /= j;
                    prime_count++;
                }
                else break;
            }
        if (num > 1) prime_count++;
        
        if (prime[prime_count])
            under_prime_count++;
    }
    std::cout << under_prime_count;
}