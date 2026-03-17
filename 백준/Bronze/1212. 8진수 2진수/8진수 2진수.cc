#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string oct_num;
    std::cin >> oct_num;

    std::string bin_num = "";
    for (int i = 0; i < oct_num.length(); i++)
    {
        switch (oct_num[i])
        {
        case '0': bin_num += "000"; break;
        case '1': bin_num += "001"; break;
        case '2': bin_num += "010"; break;
        case '3': bin_num += "011"; break;
        case '4': bin_num += "100"; break;
        case '5': bin_num += "101"; break;
        case '6': bin_num += "110"; break;
        case '7': bin_num += "111"; break;
        }
    }
    while (bin_num[0] == '0' && bin_num != "0")
        bin_num.erase(0, 1);
    std::cout << bin_num;
}