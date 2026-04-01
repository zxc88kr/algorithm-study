#include <string>
#include <vector>

std::string solution(std::vector<std::string> survey, std::vector<int> choices)
{
    std::vector<int> mbti(26, 0);
    
    for (int i = 0; i < survey.size(); i++)
    {
        char left = survey[i][0];
        char right = survey[i][1];
        
        if (choices[i] <= 3) mbti[left - 'A'] += (4 - choices[i]);
        else if (choices[i] >= 5) mbti[right - 'A'] += (choices[i] - 4);
    }
    
    std::string answer = "";
    
    if (mbti['R' - 'A'] >= mbti['T' - 'A']) answer.push_back('R');
    else answer.push_back('T');
    
    if (mbti['C' - 'A'] >= mbti['F' - 'A']) answer.push_back('C');
    else answer.push_back('F');
    
    if (mbti['J' - 'A'] >= mbti['M' - 'A']) answer.push_back('J');
    else answer.push_back('M');
    
    if (mbti['A' - 'A'] >= mbti['N' - 'A']) answer.push_back('A');
    else answer.push_back('N');
    
    return answer;
}