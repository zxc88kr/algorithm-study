#include <cstdio>
#include <string>

std::string solution(std::string cipher, int code) {
    std::string answer = "";
    for (int i = code - 1; i < cipher.length(); i += code)
        answer += cipher[i];
    return answer;
}