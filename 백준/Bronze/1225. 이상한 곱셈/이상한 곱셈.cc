#include <iostream>
#include <string>

int main()
{
    std::string str1, str2;
    std::cin >> str1 >> str2;
    
    long long sum1, sum2;
    sum1 = sum2 = 0;
    for (int i = 0; i < str1.length(); i++)
        sum1 += (str1[i] - '0');
    for (int i = 0; i < str2.length(); i++)
        sum2 += (str2[i] - '0');
    
    std::cout << sum1 * sum2;
}