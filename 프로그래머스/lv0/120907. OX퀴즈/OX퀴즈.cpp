#include <iostream>
#include <string>
#include <vector>
#include <sstream>

std::vector<std::string> solution(std::vector<std::string> quiz) {
    std::vector<std::string> answer;
    for (int i = 0; i < quiz.size(); i++)
    {
        int a, b, c;
        char oper, equal;
        
        std::stringstream ss(quiz[i]);
        ss >> a >> oper >> b >> equal >> c;
        
        if (oper == '+')
        {
            if (a + b == c) answer.push_back("O");
            else            answer.push_back("X");
        }
        else if (oper == '-')
        {
            if (a - b == c) answer.push_back("O");
            else            answer.push_back("X");
        }
    }
    return answer;
}