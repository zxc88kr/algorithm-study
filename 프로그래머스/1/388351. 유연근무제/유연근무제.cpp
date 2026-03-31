#include <vector>

int time_trans(int original)
{
    return (original / 100 * 60) + (original % 100);
}

int solution(std::vector<int> schedules, std::vector<std::vector<int>> timelogs, int startday)
{
    int answer = 0;
    int n = schedules.size();
    
    for (int i = 0; i < n; i++)
    {
        int deadline = time_trans(schedules[i]) + 10;
        bool ok = true;
        
        for (int j = 0; j < 7; j++)
        {
            int today = (startday - 1 + j) % 7;
            if (today == 5 || today == 6) continue;
            
            if (time_trans(timelogs[i][j]) > deadline)
            {
                ok = false;
                break;
            }
        }
        if (ok) answer++;
    }
    return answer;
}