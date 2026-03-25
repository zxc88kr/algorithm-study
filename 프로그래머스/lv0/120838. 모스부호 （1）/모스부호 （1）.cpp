#include <cstdio>
#include <string>
#include <map>
#include <sstream>

std::string solution(std::string letter) {
    std::string answer = "";
    
    std::string arr[26] = { 
    ".-", "-...", "-.-.", "-..", ".", "..-.",
    "--.", "....", "..", ".---", "-.-", ".-..",
    "--", "-.", "---", ".--.", "--.-", ".-.",
    "...", "-", "..-", "...-", ".--", "-..-",
    "-.--", "--.."
    };
    std::map<std::string, char> v;
    for (int i = 0; i < 26; i++)
        v[arr[i]] = 'a' + i;
    
    std::string str = "";
    std::stringstream ss(letter);
    while (ss >> str)
        answer += v[str];
    
    return answer;
}