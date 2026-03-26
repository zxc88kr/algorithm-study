#include <string>
#include <vector>

std::string solution(std::string number, int k)
{
    std::string answer = "";
    answer += number[0];
    
    for (int i = 1; i < number.size(); i++)
    {
        while (!answer.empty() && k > 0)
        {
            if (answer[answer.size() - 1] < number[i])
            {
                answer.erase(answer.size() - 1, 1);
                k--;
            }
            else break;
        }
        answer += number[i];
    }
    while (k--) answer.erase(answer.size() - 1, 1);
    
    return answer;
}