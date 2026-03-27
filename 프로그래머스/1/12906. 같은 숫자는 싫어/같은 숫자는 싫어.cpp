#include <vector>

std::vector<int> solution(std::vector<int> arr) 
{
    std::vector<int> answer;
    
    for (int num : arr)
        if (answer.empty() || answer.back() != num)
            answer.push_back(num);

    return answer;
}