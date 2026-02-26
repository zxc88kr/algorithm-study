#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m;
    std::cin >> n >> m;
    
    std::vector<int> psum(n + 1, 0);
    for (int i = 1; i < n + 1; i++)
    {
        std::cin >> psum[i];
        psum[i] += psum[i - 1];
    }
    
    int a, b;
    for (int i = 0; i < m; i++)
    {
        std::cin >> a >> b;
        std::cout << psum[b] - psum[a - 1] << '\n';
    }
}