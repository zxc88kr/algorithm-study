#include <iostream>
#include <set>
#include <iterator>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    std::cin >> t;
    
    while (t--)
    {
        std::multiset<int> ms;
        
        int k;
        std::cin >> k;
        
        while (k--)
        {
            char ch;
            int num;
            std::cin >> ch >> num;
            
            if (ch == 'I') ms.insert(num);
            else
            {
                if (ms.empty()) continue;
                
                if (num == 1) ms.erase(std::prev(ms.end()));
                else if (num == -1) ms.erase(ms.begin());
            }
        }
        
        if (ms.empty()) std::cout << "EMPTY" << '\n';
        else std::cout << *std::prev(ms.end()) << ' ' << *ms.begin() << '\n';
    }
}