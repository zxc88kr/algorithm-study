#include <iostream>
#include <vector>

int main()
{
    int n, k;
    std::cin >> n >> k;
    
    std::vector<int> coin(n);
    for (int i = 0; i < n; i++)
        std::cin >> coin[i];
    
    int count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        count += k / coin[i];
        k %= coin[i];
    }
    std::cout << count;
}