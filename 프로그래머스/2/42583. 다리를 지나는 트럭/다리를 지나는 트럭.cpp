#include <vector>
#include <queue>

int solution(int bridge_length, int weight, std::vector<int> truck_weights)
{
    int time = 0;
    int sum_weight = 0;
    int idx = 0;
    
    std::queue<int> q;
    
    while (true)
    {
        if (idx == truck_weights.size())
        {
            time += bridge_length;
            break;
        }
        
        time++;
        
        if (q.size() == bridge_length)
        {
            sum_weight -= q.front();
            q.pop();
        }
        
        if (sum_weight + truck_weights[idx] <= weight)
        {
            sum_weight += truck_weights[idx];
            q.push(truck_weights[idx]);
            idx++;
        }
        else q.push(0);
    }
    
    return time;
}