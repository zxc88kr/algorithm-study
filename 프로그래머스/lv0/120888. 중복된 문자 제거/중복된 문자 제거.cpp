#include <cstdio>
#include <string>
#include <unordered_set>

std::string solution(std::string my_string) {
    std::string answer = "";
    std::unordered_set<char> dict;
    for(int i = 0; i < my_string.length(); i++)
        if(dict.find(my_string[i]) == dict.end())
        {
            dict.insert(my_string[i]);
            answer += my_string[i];
        }
    return answer;
}