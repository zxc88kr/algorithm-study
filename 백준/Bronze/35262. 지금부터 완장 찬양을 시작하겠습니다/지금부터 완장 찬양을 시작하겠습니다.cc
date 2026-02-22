#include <iostream>

int solution()
{
    int n, k;
    std::cin >> n >> k;
    
    char c;
    int count = k;
    for (int i = 0; i < n; i++)
    {
        std::cin >> c;
        if (c == '1') count = k;
        else if (--count == 0) return 0;
    }
    return 1;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::cout << solution();
}