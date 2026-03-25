#include <cstdio>
#include <cmath>

int solution(int n) {
    int answer = 0;
    for (int i = 1; i < std::sqrt(n); i++)
        if (n % i == 0) answer += 2;
    if (std::pow((int)std::sqrt(n), 2) == n) answer++;
    return answer;
}