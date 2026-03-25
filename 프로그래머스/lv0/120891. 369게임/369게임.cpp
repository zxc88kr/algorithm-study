#include <cstdio>

int solution(int order) {
    int answer = 0;
    while (order != 0)
    {
        int val = order % 10;
        if (val == 3 || val == 6 || val == 9) answer++;
        order /= 10;
    }
    return answer;
}