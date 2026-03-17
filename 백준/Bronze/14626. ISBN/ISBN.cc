#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> weigh(13);
    for (int i = 0; i < 13; i++)
        weigh[i] = (i % 2 == 0) ? 1 : 3;
    
    int blank_idx;
    int sum = 0;
    
    std::string str;
    std::cin >> str;
    for (int i = 0; i < 13; i++)
    {
        if (str[i] == '*') blank_idx = i;
        else sum += (str[i] - '0') * weigh[i];
    }
    
    for (int i = 0; i <= 9; i++)
        if ((sum + weigh[blank_idx] * i) % 10 == 0)
        {
            std::cout << i;
            break;
        }
}