#include <cstdio>
#define MAX_DEPTH 8

void dfs(int depth, int num, int n, int m)
{
    static bool visited[MAX_DEPTH + 1] = { false, };
    static int arr[MAX_DEPTH] = { 0, };

    if (depth == m)
    {
        for (int i = 0; i < m; i++)
            printf("%d ", arr[i]);
        printf("\n");
        return;
    }

    for (int i = num; i <= n; i++)
        if (!visited[i])
        {
            visited[i] = true;
            arr[depth] = i;
            dfs(depth + 1, i + 1, n, m);
            visited[i] = false;
        }
}

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    dfs(0, 1, N, M);
}