#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cin >> str;
    
    int result = 1;
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
        if (str[i] != str[len - i - 1])
        {
            result = 0;
            break;
        }
    std::cout << result;
}