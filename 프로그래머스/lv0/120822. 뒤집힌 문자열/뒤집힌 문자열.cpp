#include <cstdio>
#include <string>

std::string solution(std::string my_string) {
    std::string answer = "";
    for (int i = my_string.length() - 1; i >= 0; i--)
        answer += my_string[i];
    return answer;
}