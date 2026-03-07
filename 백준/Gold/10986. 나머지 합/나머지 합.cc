#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m;
    std::cin >> n >> m;
    
    std::vector<long long> div(m, 0);
    
    int x;
    long long sum = 0;
    long long count = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        sum = (sum + x) % m;
        div[sum]++;
        if (sum == 0) count++;
    }
    
    for (int i = 0; i < m; i++)
        count += (div[i] * (div[i] - 1)) / 2;
    
    std::cout << count;
}