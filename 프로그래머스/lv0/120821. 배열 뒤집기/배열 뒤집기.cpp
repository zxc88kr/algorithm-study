#include <cstdio>
#include <vector>

std::vector<int> solution(std::vector<int> num_list) {
    std::vector<int> answer;
    for (int i = num_list.size() - 1; i >= 0; i--)
        answer.push_back(num_list[i]);
    return answer;
}