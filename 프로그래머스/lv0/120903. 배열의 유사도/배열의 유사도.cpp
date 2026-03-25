#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int solution(std::vector<std::string> s1, std::vector<std::string> s2) {
    int answer = 0;
    std::sort(s1.begin(), s1.end());
    
    for (int i = 0; i < s2.size(); i++)
        if(std::binary_search(s1.begin(), s1.end(), s2[i])) answer++;
    return answer;
}