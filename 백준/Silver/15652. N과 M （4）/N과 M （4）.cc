#include <iostream>
#include <vector>

std::vector<int> arr;

void dfs(int depth, int n, int m, int prev)
{
    if (depth == m)
    {
        for (auto it : arr)
            std::cout << it << ' ';
        std::cout << '\n';
        return;
    }
    
    for (int i = prev; i <= n; i++)
    {
        arr.push_back(i);
        dfs(depth + 1, n, m, i);
        arr.pop_back();
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cout.tie(NULL);
    
    int n, m;
    std::cin >> n >> m;
    
    arr.reserve(m);
    
    dfs(0, n, m, 1);
}