#include <iostream>
#include <vector>

std::vector<int> arr;
std::vector<bool> visited(9);

void dfs(int depth, int n, int m)
{
    if (depth == m)
    {
        for (auto it : arr)
            std::cout << it << ' ';
        std::cout << '\n';
    }
    
    for (int i = 1; i <= n; i++)
        if (!visited[i])
        {
            visited[i] = true;
            arr.push_back(i);
            dfs(depth + 1, n, m);
            arr.pop_back();
            visited[i] = false;
        }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cout.tie(NULL);
    
    int n, m;
    std::cin >> n >> m;
    
    dfs(0, n, m);
}