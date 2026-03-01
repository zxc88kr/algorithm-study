#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::vector<int> num(n);
    for (int i = 0; i < n; i++)
        std::cin >> num[i];
    std::sort(num.begin(), num.end());
    
    int m, x;
    std::cin >> m;
    
    for (int i = 0; i < m; i++)
    {
        std::cin >> x;
        std::cout << (std::binary_search(num.begin(), num.end(), x) ? 1 : 0) << '\n';
    }
}