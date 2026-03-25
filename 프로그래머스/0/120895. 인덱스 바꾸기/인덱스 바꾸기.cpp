#include <iostream>
#include <string>

std::string solution(std::string my_string, int num1, int num2) {
    std::string answer = my_string;
    std::swap(answer[num1], answer[num2]);
    return answer;
}