#include <cstdio>
#include <vector>

int solution(std::vector<int> numbers, int k) {
    return numbers[(2 * (k - 1)) % numbers.size()];
}