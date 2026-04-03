#include <vector>
#include <algorithm>

long long solution(int n, std::vector<int> times)
{
    long long left = 1;
    long long right = *std::max_element(times.begin(), times.end()) * (long long)n;
    long long mid = -1;
    
    while (left <= right)
    {
        mid = (left + right) / 2;
        
        long long temp = 0;
        for (int i = 0; i < times.size(); i++)
        {
            temp += (mid / times[i]);
            if (temp >= n) break;
        }
        
        if (temp >= n) right = mid - 1;
        else left = mid + 1;
    }
    
    return left;
}