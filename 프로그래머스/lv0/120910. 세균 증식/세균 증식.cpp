#include <cstdio>
#include <cmath>

int solution(int n, int t) {
    int answer = n * std::pow(2, t);
    return answer;
}