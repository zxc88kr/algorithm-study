#include <iostream>
#include <string>
#include <algorithm>

bool compare(char a, char b)
{
    return a > b;
}

int main()
{
    std::string str;
    std::cin >> str;
    
    std::sort(str.begin(), str.end(), compare);
    std::cout << str;
}