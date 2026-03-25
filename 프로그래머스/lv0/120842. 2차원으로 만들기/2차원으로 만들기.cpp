#include <cstdio>
#include <vector>

std::vector<std::vector<int>> solution(std::vector<int> num_list, int n) {
    std::vector<std::vector<int>> answer;
    for (int i = 0; i < num_list.size() / n; i++)
    {
        std::vector<int> temp;
        for (int j = 0; j < n ; j++)
            temp.push_back(num_list[n * i + j]);
        answer.push_back(temp);
    }
    return answer;
}