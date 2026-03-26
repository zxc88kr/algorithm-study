#include <string>
#include <vector>
#include <utility>
#include <queue>

int solution(std::vector<int> priorities, int location)
{
    int order = 1;
    
    std::queue<std::pair<int, int>> q;
    std::priority_queue<int> pq;
    
    for (int i = 0; i < priorities.size(); i++)
    {
        q.push({ priorities[i], i });
        pq.push(priorities[i]);
    }
    
    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();
        if (cur.first < pq.top()) q.push(cur);
        else
        {
            if (cur.second == location) break;
            order++;
            pq.pop();
        }
    }

    return order;
}