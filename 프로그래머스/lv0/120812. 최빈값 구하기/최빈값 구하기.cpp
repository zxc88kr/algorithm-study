#include <cstdio>
#include <vector>

int solution(std::vector<int> array) {
    std::vector<int> num(1000);
    for (int i = 0; i < array.size(); i++)
        num[array[i]]++;
    
    int max = 0;
    int max_index = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
            max_index = i;
        }
        else if (num[i] == max)
            max_index = -1;
    }
    return max_index;
}