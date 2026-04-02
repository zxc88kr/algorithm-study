#include <iostream>
#include <vector>
#include <algorithm>

int n, m;

std::vector<int> arr;
std::vector<bool> visited;

std::vector<int> result;

void dfs(int depth)
{
    if (depth == m)
    {
        for (int x : result)
            std::cout << x << ' ';
        std::cout << '\n';
        
        return;
    }
    
    for (int i = 0; i < n; i++)
        if (!visited[i])
        {
            visited[i] = true;
            result.push_back(arr[i]);
            dfs(depth + 1);
            result.pop_back();
            visited[i] = false;
        }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::cin >> n >> m;
    
    arr.resize(n);
    visited.assign(n, false);
    
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    
    std::sort(arr.begin(), arr.end());
    
    dfs(0);
}