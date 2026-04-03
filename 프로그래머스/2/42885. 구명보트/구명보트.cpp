#include <vector>
#include <algorithm>

int solution(std::vector<int> people, int limit)
{
    std::sort(people.begin(), people.end());
    
    int start = 0;
    int end = people.size() - 1;
    
    int answer = 0;
    
    while (start <= end)
    {
        if (people[start] + people[end] <= limit) start++;
        end--;
        answer++;
    }
    
    return answer;
}