#include <cstdio>
#include <vector>

int solution(std::vector<int> array, int height) {
    int answer = 0;
    for (int i = 0; i < array.size(); i++)
        if (array[i] > height) answer++;
    return answer;
}