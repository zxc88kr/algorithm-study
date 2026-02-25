#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<int> weigh(50);
    weigh[0] = 1;
    for (int i = 1; i < 50; i++)
        weigh[i] = (weigh[i - 1] * 31) % 1234567891;
    
    int l;
    std::string str;
    std::cin >> l >> str;
    
    int hash = 0;
    for (int i = 0; i < l; i++)
    {
        int temp = str[i] - 'a' + 1;
        hash += temp * weigh[i];
        hash %= 1234567891;
    }
    std::cout << hash;
}