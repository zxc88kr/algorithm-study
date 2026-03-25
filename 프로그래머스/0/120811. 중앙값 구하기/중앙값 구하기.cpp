#include <cstdio>
#include <vector>

int solution(std::vector<int> array) {
    int len = array.size();
    for (int i = 0; i < len; i++)
        for (int j = 0; j < len - i - 1; j++)
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
    return array[(len - 1) / 2];
}