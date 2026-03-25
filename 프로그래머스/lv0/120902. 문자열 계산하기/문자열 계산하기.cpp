#include <iostream>
#include <string>
#include <sstream>

int solution(std::string my_string) {
    int answer;
    std::stringstream ss(my_string);
    ss >> answer;
    
    char oper;
    int num;
    while (ss >> oper >> num)
    {
        if (oper == '+') answer += num;
        else if (oper == '-') answer -= num;
    }
    return answer;
}