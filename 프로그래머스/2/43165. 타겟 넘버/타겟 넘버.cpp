#include <vector>

int count = 0;
int result = 0;

void dfs(int depth, const std::vector<int>& numbers, int result, int target)
{
    if (depth == numbers.size())
    {
        if (result == target) count++;
        return;
    }
    
    dfs(depth + 1, numbers, result - numbers[depth], target);
    dfs(depth + 1, numbers, result + numbers[depth], target);
}

int solution(std::vector<int> numbers, int target)
{
    dfs(0, numbers, 0, target);
    
    return count;
}