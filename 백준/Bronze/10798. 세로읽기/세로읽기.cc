#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> words(5);
    
    for (int i = 0; i < 5; i++)
        std::cin >> words[i];
    
    for (int i = 0; i < 15; i++)
        for (int j = 0; j < 5; j++)
            if (i < words[j].length())
                std::cout << words[j][i];
}