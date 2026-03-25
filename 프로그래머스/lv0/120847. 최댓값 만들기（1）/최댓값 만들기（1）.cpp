#include <cstdio>
#include <vector>
#include <algorithm>

int solution(std::vector<int> numbers) {
    int len = numbers.size();
    std::sort(numbers.begin(), numbers.end());
    return numbers[len - 2] * numbers[len - 1];
}