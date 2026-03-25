#include <cstdio>
#include <vector>

std::vector<int> solution(int n, std::vector<int> numlist) {
    std::vector<int> answer;
    for (int i = 0; i < numlist.size(); i++)
        if (numlist[i] % n == 0)
            answer.emplace_back(numlist[i]);
    return answer;
}