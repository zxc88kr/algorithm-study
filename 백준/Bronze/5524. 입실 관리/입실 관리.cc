#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int N;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::string str;
        std::cin >> str;
        for (int j = 0; j < str.length(); j++)
            if (std::isupper(str[j]))
                str[j] = std::tolower(str[j]);
        std::cout << str << '\n';
    }
}