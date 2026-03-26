#include <string>
#include <vector>

std::string solution(std::string number, int k)
{
    std::string answer = "";
    answer.push_back(number[0]);
    
    for (int i = 1; i < number.size(); i++)
    {
        while (!answer.empty() && k > 0 && answer.back() < number[i])
        {
            answer.pop_back();
            k--;
        }
        answer.push_back(number[i]);
    }
    while (k--) answer.pop_back();
    
    return answer;
}