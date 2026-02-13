#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::vector<int> havings(n);
    for (int i = 0; i < n; i++)
        std::cin >> havings[i];
    std::sort(havings.begin(), havings.end());
    
    int m;
    std::cin >> m;
    
    std::vector<int> cards(m);
    for (int i = 0; i < m; i++)
        std::cin >> cards[i];
    
    for (auto card : cards)
    {
        if (std::binary_search(havings.begin(), havings.end(), card))
            std::cout << 1 << ' ';
        else std::cout << 0 << ' ';
    }
}