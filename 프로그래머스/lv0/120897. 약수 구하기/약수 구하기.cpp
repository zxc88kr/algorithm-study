#include <cstdio>
#include <vector>

std::vector<int> solution(int n) {
    std::vector<int> answer;
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0)
            answer.push_back(i);
    answer.push_back(n);
    return answer;
}