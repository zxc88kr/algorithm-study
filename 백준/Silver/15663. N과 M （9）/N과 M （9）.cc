#include <iostream>
#include <vector>
#include <algorithm>

int n, m;

std::vector<int> nums;
std::vector<bool> visited;

std::vector<int> selected;

void dfs(int depth)
{
    if (depth == m)
    {
        for (int& x : selected)
            std::cout << x << ' ';
        std::cout << '\n';
    }
    
    int prev = -1;
    for (int i = 0; i < n; i++)
        if (!visited[i] && nums[i] != prev)
        {
            visited[i] = true;
            selected.push_back(nums[i]);
            prev = nums[i];
            dfs(depth + 1);
            selected.pop_back();
            visited[i] = false;
        }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::cin >> n >> m;
    
    nums.assign(n, 0);
    visited.assign(n, false);
    
    for (int i = 0; i < n; i++)
        std::cin >> nums[i];
    
    std::sort(nums.begin(), nums.end());
    
    dfs(0);
}