#include <vector>
#include <algorithm>

int solution(int distance, std::vector<int> rocks, int n)
{
    std::sort(rocks.begin(), rocks.end());
    rocks.push_back(distance);
    
    int left = 0;
    int right = distance;
    
    int answer = -1;
    
    while (left <= right)
    {
        int mid = (left + right) / 2;
        
        int removed = 0;
        int prev = 0;
        
        for (int i = 0; i < rocks.size(); i++)
        {
            if (rocks[i] - prev < mid) removed++;
            else prev = rocks[i];
        }
        
        if (removed <= n)
        {
            answer = mid;
            left = mid + 1; 
        }
        else right = mid - 1;
    }
    
    return answer;
}