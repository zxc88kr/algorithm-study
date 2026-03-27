#include <string>

std::string solution(std::string new_id)
{
    std::string answer = "";
    
    for (char ch : new_id)
    {
        if (isalpha(ch)) answer.push_back(std::tolower(ch));
        else if (isdigit(ch) || ch == '-' || ch == '_' || ch == '.') answer.push_back(ch);
    }
    
    while (answer.find("..") != std::string::npos)
        answer.replace(answer.find(".."), 2, ".");
    
    if (answer.front() == '.') answer.erase(0, 1);
    if (answer.back() == '.') answer.erase(answer.size() - 1, 1);
    
    if (answer.empty()) answer = "a";
    
    if (answer.size() >= 16) answer = answer.substr(0, 15);
    if (answer.back() == '.') answer.erase(answer.size() - 1, 1);
    
    if (answer.size() <= 2)
        while (answer.size() < 3)
            answer.push_back(answer.back());
    
    return answer;
}