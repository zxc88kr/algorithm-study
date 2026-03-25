#include <cstdio>
#include <vector>

std::vector<int> solution(int money) {
    std::vector<int> answer;
    answer.push_back(money / 5500);
    answer.push_back(money % 5500);
    return answer;
}