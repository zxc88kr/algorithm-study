#include <vector>

std::vector<int> solution(std::vector<int> answers)
{
    std::vector<std::vector<int>> ans(4);
    
    ans[1] = { 1, 2, 3, 4, 5 };
    ans[2] = { 2, 1, 2, 3, 2, 4, 2, 5 };
    ans[3] = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
    
    int max = 0;
    
    std::vector<int> answer;
    
    for (int idx = 1; idx <= 3; idx++)
    {
        int count = 0;
        
        for (int i = 0; i < answers.size(); i++)
            if (ans[idx][i % ans[idx].size()] == answers[i]) count++;
        
        if (count > max)
        {
            answer.clear();
            answer.push_back(idx);
            
            max = count;
        }
        else if (count == max) answer.push_back(idx);
    }
    
    return answer;
}