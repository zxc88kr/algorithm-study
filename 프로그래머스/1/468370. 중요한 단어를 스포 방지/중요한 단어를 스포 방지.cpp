#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>

int solution(std::string message, std::vector<std::vector<int>> spoiler_ranges)
{
    int answer = 0;
    
    std::unordered_map<std::string, int> m;
    
    std::stringstream ss(message);
    std::string word;
    
    while (std::getline(ss, word, ' ')) m[word]++;
    
    int prev_end = 0;
    for (auto range : spoiler_ranges)
    {
        int start = std::max(range[0], prev_end);
        int end = range[1];
        
        if (start > end) continue;
        
        while (start >= 0 && message[start] != ' ') start--;
        while (end < message.size() && message[end] != ' ') end++;
        
        start++;
        
        std::stringstream ss(message.substr(start, end - start));
        while (std::getline(ss, word, ' ')) m[word]--;
        
        prev_end = end + 1;
    }
    
    for (auto it = m.begin(); it != m.end(); it++)
        if (it->second == 0) answer++;
    
    return answer;
}