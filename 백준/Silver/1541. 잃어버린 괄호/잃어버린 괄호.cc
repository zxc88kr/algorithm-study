#include <iostream>

int main()
{
    int num;
    char oper;
    
    std::cin >> num;
    int res = num;
    
    bool minus_flag = false;
    while (std::cin >> oper >> num)
    {
        if (minus_flag)
        {
            res -= num;
            continue;
        }
        
        if (oper == '-')
        {
            minus_flag = true;
            res -= num;
        }
        else res += num;
    }
    std::cout << res;
}