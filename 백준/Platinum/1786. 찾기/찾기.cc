#include <iostream>
#include <string>
#include <vector>

std::vector<int> get_pi(const std::string& pattern)
{
    int m = pattern.size();
    std::vector<int> pi(m, 0);

    int j = 0;
    for (int i = 1; i < m; i++)
    {
        while (j > 0 && pattern[i] != pattern[j])
            j = pi[j - 1];
        
        if (pattern[i] == pattern[j])
            pi[i] = ++j;
    }

    return pi;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string text;
    std::string pattern;

    std::getline(std::cin, text);
    std::getline(std::cin, pattern);
    
    std::vector<int> pi = get_pi(pattern);
    std::vector<int> answer;

    int n = text.size();
    int m = pattern.size();

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        while (j > 0 && text[i] != pattern[j])
            j = pi[j - 1];

        if (text[i] == pattern[j])
        {
            if (j == m - 1)
            {
                answer.push_back(i - m + 2);
                j = pi[j];
            }
            else j++;
        }
    }

    std::cout << answer.size() << '\n';
    for (int pos : answer)
        std::cout << pos << ' ';
}