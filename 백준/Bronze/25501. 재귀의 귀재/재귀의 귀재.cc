#include <iostream>
#include <string>

int calling;

int recursion(std::string& str, int l, int r)
{
    calling++;
    if (l >= r) return 1;
    if (str[l] != str[r]) return 0;
    return recursion(str, l + 1, r - 1);
}

int isPalindrome(std::string& str)
{
    calling = 0;
    return recursion(str, 0, str.size() - 1);
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    std::cin >> t;
    
    std::string str;
    for (int i = 0; i < t; i++)
    {
        std::cin >> str;
        std::cout << isPalindrome(str) << ' ' << calling << '\n';
    }
}