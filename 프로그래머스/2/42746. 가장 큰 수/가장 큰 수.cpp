#include <string>
#include <vector>
#include <algorithm>

bool compare(const std::string& str1, const std::string& str2)
{
    return str1 + str2 > str2 + str1;
}

std::string solution(std::vector<int> numbers)
{
    std::vector<std::string> strs(numbers.size());
    
    for (int i = 0; i < strs.size(); i++)
        strs[i] = std::to_string(numbers[i]);
    
    std::sort(strs.begin(), strs.end(), compare);
    
    std::string answer = "";
    for (std::string& str : strs)
        answer += str;
    
    if (answer[0] == '0') answer = "0";
    
    return answer;
}