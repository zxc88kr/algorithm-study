#include <vector>
#include <unordered_set>
#include <cmath>

int solution(std::vector<int> nums)
{
    std::unordered_set<int> s(nums.begin(), nums.end());
    
    return std::min(nums.size() / 2, s.size());
}