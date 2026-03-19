#include <string>
#include <vector>

std::string solution(std::string myString)
{
    std::string answer = "";
    for (char ch : myString)
        answer += std::toupper(ch);
    return answer;
}