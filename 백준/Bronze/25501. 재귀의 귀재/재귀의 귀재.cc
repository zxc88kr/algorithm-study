#include <iostream>
#include <string>

int callCount = 0;

int recursion(std::string& s, int l, int r)
{
    callCount++;

    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;

    return recursion(s, l + 1, r - 1);
}

int isPalindrome(std::string& s)
{
    callCount = 0;
    return recursion(s, 0, s.length() - 1);
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++)
    {
        std::string str;
        std::cin >> str;
        std::cout << isPalindrome(str) << ' ' << callCount << '\n';
    }
}