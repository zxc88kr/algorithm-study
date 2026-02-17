#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int max = 123456 * 2 + 1;
    std::vector<bool> primes(max, true);
    primes[0] = primes[1] = false;
    
    for (int i = 2; i * i < max; i++)
        if (primes[i])
            for (int j = i * i; j < max; j += i)
                primes[j] = false;
    
    std::vector<int> results;
    for (int i = 0; i < max; i++)
        if (primes[i])
            results.push_back(i);
    
    while (true)
    {
        int n;
        std::cin >> n;
        
        if (n == 0) break;
        
        auto start = std::lower_bound(results.begin(), results.end(), n + 1);
        auto end = std::upper_bound(results.begin(), results.end(), 2 * n);
        
        std::cout << end - start << '\n';
    }
}