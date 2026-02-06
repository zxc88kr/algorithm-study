#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::string str;
    std::cin >> str;
    for (int i = 0; i < str.length(); i++)
        str[i] = std::toupper(str[i]);
    std::cout << str;
}