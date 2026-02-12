#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool compare(std::string& a, std::string& b)
{
    if (a.length() == b.length())
        return a < b;
    return a.length() < b.length();
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::vector<std::string> words(n);
    for (int i = 0; i < n; i++)
        std::cin >> words[i];
    std::sort(words.begin(), words.end(), compare);
    
    words.erase(std::unique(words.begin(), words.end()), words.end());
    
    for (auto word : words)
        std::cout << word << '\n';
}