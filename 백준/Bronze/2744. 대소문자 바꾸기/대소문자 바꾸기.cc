#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a') str[i] -= ('a' - 'A');
        else if (str[i] >= 'A') str[i] += ('a' - 'A');
    }
    std::cout << str;
}