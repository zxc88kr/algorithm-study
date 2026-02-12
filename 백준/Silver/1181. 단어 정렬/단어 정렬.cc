#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool comp(std::string& str1, std::string& str2)
{
    if (str1.length() == str2.length())
        for (int i = 0; i < str1.length(); i++)
            if (str1[i] != str2[i])
                return (str1[i] < str2[i]);
    return (str1.length() < str2.length());
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int N;
    std::cin >> N;

    std::vector<std::string> word(N);
    for (int i = 0; i < N; i++)
        std::cin >> word[i];

    std::sort(word.begin(), word.end(), comp);
    word.erase(std::unique(word.begin(), word.end()), word.end());
    for (auto it = word.begin(); it != word.end(); it++)
        std::cout << *it << '\n';
}