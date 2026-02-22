#include <iostream>
#include <string>

int main()
{
    int n;
    std::string str;
    std::cin >> n >> str;
    
    int min = 5;
    for (int i = 0; i < n - 4; i++)
    {
        int count = 0;
        if (str[i] != 'e') count++;
        if (str[i + 1] != 'a') count++;
        if (str[i + 2] != 'g') count++;
        if (str[i + 3] != 'l') count++;
        if (str[i + 4] != 'e') count++;
        if (count < min) min = count;
    }
    std::cout << min;
}