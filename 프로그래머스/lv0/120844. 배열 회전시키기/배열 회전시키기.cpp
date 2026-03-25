#include <cstdio>
#include <string>
#include <vector>

std::vector<int> solution(std::vector<int> numbers, std::string direction) {
    std::vector<int> answer;
    int len = numbers.size();
    if (direction == "left")
    {
        for(int i = 0; i < len - 1; i++)
            answer.push_back(numbers[i + 1]);
        answer.push_back(numbers[0]);
    }
    else if (direction == "right")
    {
        answer.push_back(numbers[len - 1]);
        for(int i = 0; i < len - 1; i++)
            answer.push_back(numbers[i]);
    }
    return answer;
}