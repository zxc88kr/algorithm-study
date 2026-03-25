#include <cstdio>

int solution(int n) {
    int answer = 1;
    int fact = 1;
    while (1)
    {
        fact *= answer;
        if (fact > n) break;
        answer++;
    }
    answer--;
    return answer;
}