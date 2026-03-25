#include <iostream>
#include <string>
#include <algorithm>

std::string solution(std::string my_string) {
    for (int i = 0; i < my_string.length(); i++)
        if (std::isupper(my_string[i]))
            my_string[i] = std::tolower(my_string[i]);
    std::sort(my_string.begin(), my_string.end());
    return my_string;
}