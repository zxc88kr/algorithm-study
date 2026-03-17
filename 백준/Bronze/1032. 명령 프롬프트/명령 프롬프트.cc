#include <iostream>
#include <string>

int main()
{
    int N;
    std::cin >> N;

    std::string search[N];
    for (int i = 0; i < N; i++)
        std::cin >> search[i];

    std::string pattern = search[0];
    for (int i = 0; i < pattern.length(); i++)
        for (int j = 1; j < N; j++)
            if (search[j][i] != pattern[i])
            {
                pattern[i] = '?';
                break;
            }
    std::cout << pattern;
}