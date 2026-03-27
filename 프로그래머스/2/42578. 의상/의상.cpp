#include <vector>
#include <string>
#include <unordered_map>

int solution(std::vector<std::vector<std::string>> clothes)
{
    std::unordered_map<std::string, int> m;
    
    for (auto cloth : clothes)
        m[cloth[1]]++;
    
    int answer = 1;
    
    for (auto it : m)
        answer *= (it.second + 1);
    
    answer--;
    
    return answer;
}