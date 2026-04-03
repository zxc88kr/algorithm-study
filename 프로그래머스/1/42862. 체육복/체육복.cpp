#include <vector>

int solution(int n, std::vector<int> lost, std::vector<int> reserve)
{
    std::vector<int> cloth(32, 0);
    
    for (int i = 1; i <= n; i++) cloth[i] = 1;
    
    for (int x : lost) cloth[x]--;
    for (int x : reserve) cloth[x]++;
    
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (cloth[i] >= 1) count++;
        else if (cloth[i] == 0)
        {
            if (cloth[i - 1] == 2) count++;
            else if (cloth[i + 1] == 2)
            {
                cloth[i + 1] = 1;
                count++;
            }
        }
    }
    
    return count;
}