#include <string>
#include <vector>
#include <unordered_map>

std::string solution(std::vector<std::string> participant, std::vector<std::string> completion)
{
    std::unordered_map<std::string, int> m;
    
    for (auto p : participant) m[p]++;
    for (auto c : completion) m[c]--;
    
    for (auto it = m.begin(); it != m.end(); it++)
        if (it->second == 1) return it->first;
    
    return "";
}