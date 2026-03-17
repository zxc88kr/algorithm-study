#include <iostream>
#include <string>

int main()
{
    std::string num1, num2;
    std::cin >> num1 >> num2;

    int num1_len = num1.length();
    int num2_len = num2.length();
    int len = (num1_len > num2_len) ? num1_len : num2_len;

    int carry = 0;
    int num[len] = { 0, };
    for (int i = 1; i <= len; i++)
    {
        int n1 = (num1_len - i >= 0) ? ((int)num1[num1_len - i] - 48) : 0;
        int n2 = (num2_len - i >= 0) ? ((int)num2[num2_len - i] - 48) : 0;

        num[len - i] = (n1 + n2 + carry) % 10;

        if (n1 + n2 + carry >= 10) carry = 1;
        else carry = 0;
    }
    if (carry) std::cout << '1';
    for (int i = 0; i < len; i++)
        std::cout << num[i];
}