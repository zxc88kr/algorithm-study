#include <cstdio>
#include <vector>
#include <cmath>

std::vector<int> solution(int n) {
    std::vector<int> answer;
    for (int i = 2; i <= std::sqrt(n); i++)
    {
        if (n % i == 0)
        {
            answer.push_back(i);
            while (n % i == 0) n /= i;
        }
    }
    if (n >= 2) answer.push_back(n);
    return answer;
}