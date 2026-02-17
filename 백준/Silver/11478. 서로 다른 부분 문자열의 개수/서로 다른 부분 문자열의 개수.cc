#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    std::string str;
    std::cin >> str;

    int len = str.length();
    std::unordered_set<std::string> result;
    for (int i = len; i >= 1; i--)
        for (int j = 0; j <= len - i; j++)
            result.insert(str.substr(j, i));
    printf("%d", result.size());
}