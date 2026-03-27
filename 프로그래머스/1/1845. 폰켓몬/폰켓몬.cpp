#include <vector>
#include <unordered_set>
#include <cmath>

int solution(std::vector<int> nums)
{
    std::unordered_set<int> s;
    
    for (int num : nums)
        s.insert(num);
    
    return std::min(nums.size() / 2, s.size());
}