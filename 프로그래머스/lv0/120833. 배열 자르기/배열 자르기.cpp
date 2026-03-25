#include <cstdio>
#include <vector>

std::vector<int> solution(std::vector<int> numbers, int num1, int num2) {
    std::vector<int> answer;
    for (int i = num1; i <= num2; i++)
        answer.push_back(numbers[i]);
    return answer;
}