#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    std::string str;
    while (getline(std::cin, str))
        std::cout << str << '\n';
}