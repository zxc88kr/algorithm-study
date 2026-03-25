#include <cstdio>
#include <vector>

int solution(std::vector<int> array) {
    int answer = 0;
    for (int i = 0; i < array.size(); i++)
    {
        int temp = array[i];
        while (temp > 0)
        {
            if (temp % 10 == 7) answer++;
            temp /= 10;
        }
    }
    return answer;
}