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
    
    if (strs[0] == "0") return "0";
    
    std::string answer = "";
    for (auto str : strs) answer += str;
    
    return answer;
}