#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::string str;
    std::cin >> str;
    
    std::unordered_set<std::string> words;
    int len = str.length();
    for (int i = 1; i <= len; i++)
        for (int j = 0; j <= len - i; j++)
            words.insert(str.substr(j, i));
    std::cout << words.size();
}