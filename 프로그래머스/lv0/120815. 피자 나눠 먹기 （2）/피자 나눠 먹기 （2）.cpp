#include <cstdio>

int solution(int n) {
    int answer = 1;
    while (1)
    {
        if ((6 * answer) % n == 0) break;
        answer++;
    }
    
    return answer;
}