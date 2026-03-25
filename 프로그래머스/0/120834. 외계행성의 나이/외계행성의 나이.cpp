#include <cstdio>
#include <string>
#include <algorithm>

std::string solution(int age) {
    std::string answer = "";
    while (age > 0) {
        answer += (char)(age % 10 + 'a');
        age /= 10;
    }
    reverse(answer.begin(), answer.end());
    return answer;
}