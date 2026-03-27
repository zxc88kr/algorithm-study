#include <vector>

std::vector<int> solution(int brown, int yellow)
{
    std::vector<int> answer(2);
    
    int sum = brown + yellow;
    
    for (int i = 1; i * i <= sum; i++)
        if (sum % i == 0)
        {
            int x = sum / i;
            int y = i;
            
            if ((2 * (x + y) - 4) == brown)
            {
                answer[0] = x;
                answer[1] = y;
                break;
            }
        }
    
    return answer;
}