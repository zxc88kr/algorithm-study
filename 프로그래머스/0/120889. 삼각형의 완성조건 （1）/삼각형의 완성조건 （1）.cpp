#include <cstdio>
#include <vector>
#include <algorithm>

int solution(std::vector<int> sides) {
    std::sort(sides.begin(), sides.end());
    if (sides[0] + sides[1] > sides[2]) return 1;
    else return 2;
}