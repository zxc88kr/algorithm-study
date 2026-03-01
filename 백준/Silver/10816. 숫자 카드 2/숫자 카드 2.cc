#include <iostream>
#include <unordered_map>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    int x;
    std::unordered_map<int, int> card;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        if (card.find(x) != card.end()) card[x]++;
        else card[x] = 1;
    }
    
    int m;
    std::cin >> m;
    for (int i = 0; i < m; i++)
    {
        std::cin >> x;
        if (card.find(x) != card.end()) std::cout << card[x] << ' ';
        else std::cout << 0 << ' ';
    }
        
}