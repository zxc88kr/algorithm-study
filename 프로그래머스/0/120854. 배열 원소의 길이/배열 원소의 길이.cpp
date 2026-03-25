#include <cstdio>
#include <vector>
#include <string>

std::vector<int> solution(std::vector<std::string> strlist) {
    std::vector<int> answer;
    for (int i = 0; i < strlist.size(); i++)
        answer.push_back(strlist[i].length());
    return answer;
}