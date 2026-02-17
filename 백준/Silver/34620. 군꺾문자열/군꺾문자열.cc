#include <iostream>
#include <string>

int main()
{
    int a, b;
    std::cin >> a >> b;

    std::string str;
    while (b > 1)
    {
        if (a > b)
        {
            a -= b;
            str = "G" + str;
        }
        else if (b % 2 != 0)
        {
            std::cout << -1;
            return 0;
        }
        else
        {
            b /= 2;
            str = "K" + str;
        }
    }
    for (int i = 0; i < a; i++)
        str = "G" + str;
    std::cout << str;
}