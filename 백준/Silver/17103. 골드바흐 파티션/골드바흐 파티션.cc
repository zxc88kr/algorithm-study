#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    std::vector<bool> primes(1000001, true);
    primes[0] = primes[1] = false;
    
    for (int i = 2; i * i < 1000001; i++)
        if (primes[i])
            for (int j = i * i; j < 1000001; j += i)
                primes[j] = false;
    
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        std::cin >> n;
        
        int count = 0;
        for (int j = 0; j <= n / 2; j++)
            if (primes[j] && primes[n - j])
                count++;
        std::cout << count << '\n';
    }
}