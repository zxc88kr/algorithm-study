#include <vector>
#include <algorithm>

int solution(std::vector<int> citations)
{
    int size = citations.size();
    
    std::sort(citations.begin(), citations.end());
    
    for (int i = 0; i < size; i++)
        if (citations[i] >= (size - i))
            return (size - i);
    
    return 0;
}