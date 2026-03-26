#include <vector>

int solution(std::vector<std::vector<int>> signals)
{
    int len = 1;
    for (int i = 0; i < signals.size(); i++)
        len *= (signals[i][0] + signals[i][1] + signals[i][2]);
    
    std::vector<int> road(len + 1, 0);
    
    for (int i = 0; i < signals.size(); i++)
    {
        int idx = signals[i][0] + 1;
        int tab = signals[i][0] + signals[i][2];
        
        while (idx <= len)
        {
            for (int j = 0; j < signals[i][1]; j++)
            {
                road[idx]++;
                idx++;
                if (idx > len) break;
            }
            idx += tab;
        }
    }
    
    int answer = -1;
    
    for (int i = 1; i <= len; i++)
        if (road[i] == signals.size())
        {
            answer = i;
            break;
        }
    return answer;
}