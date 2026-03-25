#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> solution(std::string my_str, int n) {
    std::vector<std::string> answer;
    for (int base = 0; base < my_str.size(); base += n)
        answer.push_back(my_str.substr(base, n));
    return answer;
}