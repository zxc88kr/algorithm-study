#include <iostream>
#define MAX_DEPTH 8

void dfs(int depth, int n, int m)
{
    static int arr[MAX_DEPTH] = { 0, };
    static bool visited[MAX_DEPTH + 1] = { false, };
    
    if (depth == m)
    {
        for (int i = 0; i < m; i++)
            std::cout << arr[i] << ' ';
        std::cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++)
        if (!visited[i])
        {
            visited[i] = true;
            arr[depth] = i;
            dfs(depth + 1, n, m);
            visited[i] = false;
        }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int N, M;
    std::cin >> N >> M;
    dfs(0, N, M);
}