#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::string str;
    std::cin >> str;
    for (char& c : str)
        c = std::toupper(c);
    std::cout << str;
}