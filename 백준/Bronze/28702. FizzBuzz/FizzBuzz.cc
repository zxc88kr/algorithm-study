#include <iostream>
#include <string>

int main()
{
    int target;
    std::string str;
    for (int i = 0; i < 3; i++)
    {
        std::cin >> str;
        if (isdigit(str[0]))
            target = std::stoi(str) + (3 - i);
    }
    
    std::string fb = "";
    if (target % 3 == 0) fb += "Fizz";
    if (target % 5 == 0) fb += "Buzz";
    if (fb == "") std::cout << target;
    else std::cout << fb;
}