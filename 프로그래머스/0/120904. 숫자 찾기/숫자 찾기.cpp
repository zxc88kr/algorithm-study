#include <iostream>
#include <string>

int solution(int num, int k) {
    std::string num_str = std::to_string(num);
    char k_char = '0' + k;

    for (int i = 0; i < num_str.length(); i++)
        if (num_str[i] == k_char)
            return i + 1;
    return -1;
}