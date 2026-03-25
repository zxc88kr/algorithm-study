#include <iostream>
#include <string>

std::string solution(std::string s) {
    std::string answer = "";
    int dict[26] = { 0, };
    for (int i = 0; i < s.length(); i++)
        dict[s[i] - 'a']++;
    for (int i = 0; i < 26; i++)
        if (dict[i] == 1)
            answer += (char)('a' + i);
    return answer;
}