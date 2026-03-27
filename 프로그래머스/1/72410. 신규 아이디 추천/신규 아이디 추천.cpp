#include <string>
#include <cctype>

std::string solution(std::string new_id)
{
    std::string answer = "";
    
    for (char ch : new_id)
    {
        if (std::isalpha(ch)) answer.push_back(std::tolower(ch));
        else if (std::isdigit(ch) || ch == '-' || ch == '_' || ch == '.') answer.push_back(ch);
    }
    
    while (answer.find("..") != std::string::npos)
        answer.replace(answer.find(".."), 2, ".");
    
    if (!answer.empty() && answer.front() == '.') answer.erase(0, 1);
    if (!answer.empty() && answer.back() == '.') answer.pop_back();
    
    if (answer.empty()) answer = "a";
    
    if (answer.size() >= 16) answer = answer.substr(0, 15);
    if (answer.back() == '.') answer.pop_back();
    
    if (answer.size() <= 2)
        while (answer.size() < 3)
            answer.push_back(answer.back());
    
    return answer;
}