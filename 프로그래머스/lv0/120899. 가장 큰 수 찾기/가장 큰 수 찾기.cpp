#include <cstdio>
#include <vector>

std::vector<int> solution(std::vector<int> array) {
    std::vector<int> answer(2);
    int max = array[0];
    answer[0] = array[0];
    answer[1] = 0;
    
    for (int i = 1; i < array.size(); i++)
        if (array[i] > max)
        {
            max = array[i];
            answer[0] = array[i];
            answer[1] = i;
        }
    return answer;
}