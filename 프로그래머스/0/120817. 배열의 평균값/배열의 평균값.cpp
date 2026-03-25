#include <cstdio>
#include <vector>

double solution(std::vector<int> numbers) {
    int sum = 0;
    int len = numbers.size();
    for (int i = 0; i < len; i++)
        sum += numbers[i];
    
    double answer = (double)sum / len;
    return answer;
}