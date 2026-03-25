#include <cstdio>
#include <string>

std::string solution(std::string my_string) {
    std::string answer = "";
    for (int i = 0; i < my_string.length(); i++)
    {
        char ch = my_string[i];
        if (islower(ch)) answer += toupper(ch);
        else if (isupper(ch)) answer += tolower(ch);
    }
    return answer;
}