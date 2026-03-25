#include <cstdio>
#include <vector>

std::vector<int> solution(std::vector<int> numbers) {
    std::vector<int> answer;
    
    int size = numbers.size();
    for (int i = 0; i < size; i++)
        answer.push_back(numbers[i] * 2);
    return answer;
}