#include <string>
#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> array, std::vector<std::vector<int>> commands)
{
    std::vector<int> answer;
    
    for (auto command : commands)
    {
        std::vector<int> temp(array.begin() + command[0] - 1, array.begin() + command[1]);
        std::sort(temp.begin(), temp.end());
        answer.push_back(temp[command[2] - 1]);
    }
    
    return answer;
}