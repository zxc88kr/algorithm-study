#include <vector>

std::vector<bool> visited;

int max = -1;

void dfs(int depth, int tire, const std::vector<std::vector<int>>& dungeons)
{
    if (depth > max) max = depth;
    
    for (int i = 0; i < dungeons.size(); i++)
        if (!visited[i] && tire >= dungeons[i][0])
        {
            visited[i] = true;
            dfs(depth + 1, tire - dungeons[i][1], dungeons);
            visited[i] = false;
        }
}

int solution(int k, std::vector<std::vector<int>> dungeons)
{
    visited.assign(dungeons.size(), false);
    
    dfs(0, k, dungeons);
    
    return max;
}