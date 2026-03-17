#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int loop;
    std::cin >> loop;
    for (int i = 0; i < loop; i++)
    {
        int a, b;
        std::cin >> a >> b;
        std::cout << a + b << '\n';
    }
}