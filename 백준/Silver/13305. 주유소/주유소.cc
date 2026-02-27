#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    long long n;
    std::cin >> n;
    
    std::vector<long long> road(n - 1);
    for (int i = 0; i < n - 1; i++)
        std::cin >> road[i];
    
    std::vector<long long> oil(n);
    for (int i = 0; i < n; i++)
        std::cin >> oil[i];
    
    long long total_price = 0;
    int price = oil[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (oil[i] < price) price = oil[i];
        total_price += price * road[i];
    }
    std::cout << total_price;
}