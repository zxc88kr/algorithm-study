#include <string>
#include <vector>

int solution(std::string s)
{
    std::vector<std::string> change = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    
    for (int i = 0; i < 10; i++)
        while (s.find(change[i]) != std::string::npos)
            s.replace(s.find(change[i]), change[i].size(), std::to_string(i));
    
    int answer = std::stoi(s);
    return answer;
}