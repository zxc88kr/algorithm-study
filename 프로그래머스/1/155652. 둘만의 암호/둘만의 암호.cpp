#include <string>
#include <vector>

std::string solution(std::string s, std::string skip, int index)
{
    std::string secret = "abcdefghijklmnopqrstuvwxyz";
    
    for (char c : skip)
        if (secret.find(c) != std::string::npos)
            secret.erase(secret.find(c), 1);
    
    int size = secret.size();
    
    std::string answer = "";
    
    for (char c : s)
        answer.push_back(secret[(secret.find(c) + index) % size]);
    
    return answer;
}