#include <vector>
#include <queue>

std::vector<int> solution(std::vector<int> progresses, std::vector<int> speeds)
{
    std::queue<int> q;
    
    for (int i = 0; i < progresses.size(); i++)
        q.push((99 - progresses[i]) / speeds[i] + 1);
    
    std::vector<int> answer;
    int max_day = 0;
    
    while (!q.empty())
    {
        int cur_day = q.front();
        q.pop();
        
        if (answer.empty() || cur_day > max_day)
            answer.push_back(1);
        else answer.back()++;
        
        if (cur_day > max_day) max_day = cur_day;
    }
    return answer;
}