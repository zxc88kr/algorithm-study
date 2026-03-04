#include <iostream>
#include <bitset>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::bitset<21> bit(0);
    
    int m;
    std::cin >> m;
    
    std::string s;
    int x;
    
    while (m--)
    {
        std::cin >> s;
        
        if (s == "all") bit.set();
        else if (s == "empty") bit.reset();
        else
        {
            std::cin >> x;
            
            if (s == "add") bit.set(x);
            else if (s == "remove") bit.reset(x);
            else if (s == "check") std::cout << bit.test(x) << '\n';
            else if (s == "toggle") bit.flip(x);
        }
    }
}