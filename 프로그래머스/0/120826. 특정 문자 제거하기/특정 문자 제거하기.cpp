#include <cstdio>
#include <string>
a
std::string solution(std::string my_string, std::string letter) {
    std::string answer = "";
    for (int i = 0; i < my_string.length(); i++)
        if (my_string[i] != letter[0])
            answer += my_string[i];
    return answer;
}