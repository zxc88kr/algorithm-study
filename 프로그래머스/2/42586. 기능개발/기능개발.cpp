#include <vector>
#include <queue>

std::vector<int> solution(std::vector<int> progresses, std::vector<int> speeds)
{
    std::queue<int> q;
    
    for (int i = 0; i < progresses.size(); i++)
        q.push((100 - progresses[i] + (speeds[i] - 1)) / speeds[i]);
    
    std::vector<int> answer;
    
    while (!q.empty())
    {
        int job = 1;
        
        int cur = q.front();
        q.pop();
        
        while (!q.empty())
        {
            if (q.front() <= cur)
            {
                q.pop();
                job++;
            }
            else break;
        }
        answer.push_back(job);
    }
    return answer;
}

