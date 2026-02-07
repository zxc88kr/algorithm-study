#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::vector<int> alpha(26);

    std::string str;
    std::cin >> str;
    for (auto ch : str)
        alpha[std::toupper(ch) - 'A']++;

    int max = -1;
    int pos = -1;
    bool flag = false;
    for (auto it = alpha.begin(); it != alpha.end(); it++)
    {
        if (*it > max)
        {
            max = *it;
            pos = it - alpha.begin();
            flag = false;
        }
        else if (*it == max)
            flag = true;
    }
    if (flag) std::cout << '?';
    else std::cout << (char)(pos + 'A');
}