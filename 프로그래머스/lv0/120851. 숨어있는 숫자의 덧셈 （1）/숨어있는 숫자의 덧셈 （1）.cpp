#include <cstdio>
#include <string>

int solution(std::string my_string) {
    int answer = 0;
    for (int i = 0; i < my_string.length(); i++)
        if (my_string[i] >= '0' && my_string[i] <= '9')
            answer += (int)(my_string[i] - '0');
    return answer;
}