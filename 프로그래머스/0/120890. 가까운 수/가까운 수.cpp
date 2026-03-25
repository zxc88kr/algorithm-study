#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>

int solution(std::vector<int> array, int n) {
    std::sort(array.begin(), array.end());
    int min_diff = std::abs(array[0] - n);
    int result = array[0];
    for (int i = 1; i < array.size(); i++)
        if (std::abs(array[i] - n) < min_diff)
        {
            min_diff = std::abs(array[i] - n);
            result = array[i];
        }
    return result;
}