#include <vector>

int count = 0;
int result = 0;

void dfs(int depth, const std::vector<int>& numbers, int target)
{
    if (depth == numbers.size())
    {
        if (result == target) count++;
        return;
    }
    
    result -= numbers[depth];
    dfs(depth + 1, numbers, target);
    result += numbers[depth];
    
    result += numbers[depth];
    dfs(depth + 1, numbers, target);
    result -= numbers[depth];
}

int solution(std::vector<int> numbers, int target)
{
    dfs(0, numbers, target);
    
    return count;
}