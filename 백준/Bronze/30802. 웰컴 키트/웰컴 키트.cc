#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    
    std::vector<int> size(6);
    for (int i = 0; i < 6; i++)
        std::cin >> size[i];
    
    int t, p;
    std::cin >> t >> p;
    
    int count = 0;
    for (int i = 0; i < 6; i++)
        count += (size[i] + t - 1) / t;
    std::cout << count << '\n';
    
    std::cout << n / p << ' ' << n % p;
}