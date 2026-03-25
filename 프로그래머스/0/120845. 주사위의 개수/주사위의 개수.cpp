#include <cstdio>
#include <vector>

int solution(std::vector<int> box, int n) {
    int answer = (box[0] / n) * (box[1] / n) * (box[2] / n);
    return answer;
}