#include <string>
#include <vector>

int date_to_int(const std::string& str)
{
    int year = std::stoi(str.substr(0, 4));
    int month = std::stoi(str.substr(5, 2));
    int day = std::stoi(str.substr(8, 2));
    
    return year * 12 * 28 + month * 28 + day;
}

std::vector<int> solution(std::string today, std::vector<std::string> terms, std::vector<std::string> privacies)
{
    std::vector<int> answer;
    
    std::vector<int> p_terms(26, 0);
    
    for (std::string& term : terms)
        p_terms[term.at(0) - 'A'] = std::stoi(term.substr(2)) * 28;
    
    for (int i = 0; i < privacies.size(); i++)
    {
        int target = p_terms[privacies[i].at(11) - 'A'] + date_to_int(privacies[i].substr(0, 10));
        int base = date_to_int(today);
        
        if (base >= target) answer.push_back(i + 1);
    }
    
    return answer;
}