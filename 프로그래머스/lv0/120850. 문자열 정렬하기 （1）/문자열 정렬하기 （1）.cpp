#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>

std::vector<int> solution(std::string my_string) {
    std::vector<int> answer;
    for (int i = 0; i < my_string.length(); i++)
        if (my_string[i] >= '0' && my_string[i] <= '9')
            answer.push_back((int)(my_string[i] - '0'));
    std::sort(answer.begin(), answer.end());
    return answer;
}