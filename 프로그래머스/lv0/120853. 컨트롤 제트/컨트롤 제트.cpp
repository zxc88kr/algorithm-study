#include <cstdio>
#include <string>
#include <sstream>
#include <stack>

int solution(std::string s) {
    int answer = 0;
    std::stringstream ss(s);
    std::string str;
    std::stack<int> stack;
    
    while (ss >> str)
    {
        if (str != "Z") stack.push(std::stoi(str));
        else stack.pop();
    }
    
    while (!stack.empty())
    {
        answer += stack.top();
        stack.pop();
    }
        
    return answer;
}