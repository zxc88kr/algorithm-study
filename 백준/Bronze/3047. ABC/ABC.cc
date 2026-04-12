#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> nums(3);
    
    std::cin >> nums[0] >> nums[1] >> nums[2];
    std::sort(nums.begin(), nums.end());
    
    char ch;
    for (int i = 0; i < 3; i++)
    {
        std::cin >> ch;
        std::cout << nums[ch - 'A'] << ' ';
    }
}