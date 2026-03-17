#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    std::cin >> t;
    
    while (t--)
    {
        int n, m;
        std::cin >> n >> m;
        
        int a, b;
        for (int i = 0; i < m; i++)
            std::cin >> a >> b;
        
        std::cout << n - 1 << '\n';
    }
}