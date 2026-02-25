#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, k;
    std::cin >> n >> k;
    
    std::vector<int> v(n);
    for (int i = 0; i < n; i++)
        std::cin >> v[i];
    std::sort(v.begin(), v.end());
    
    std::cout << v[k - 1];
}