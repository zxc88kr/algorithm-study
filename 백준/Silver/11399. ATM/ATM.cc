#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    
    std::vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
        std::cin >> v[i];
    std::sort(v.begin(), v.end());
    
    for (int i = 1; i <= n; i++)
        v[i] += v[i - 1];
    
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += v[i];
    std::cout << sum;
}