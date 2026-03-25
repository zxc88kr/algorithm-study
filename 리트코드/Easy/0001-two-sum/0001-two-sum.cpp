#include <vector>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        
        for (int i = 0; i < nums.size() - 1; i++)
            for (int j = i + 1; j < nums.size(); j++)
                if (nums[i] + nums[j] == target)
                {
                    std::vector<int> result = { i, j };
                    return result;
                }
    }
};