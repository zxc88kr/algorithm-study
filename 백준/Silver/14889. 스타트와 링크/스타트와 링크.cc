#include <iostream>
#include <vector>
#include <climits>

std::vector<std::vector<int>> stat;
std::vector<bool> start_member;

std::vector<int> v1;
std::vector<int> v2;

int min = INT_MAX;

void dfs(int depth, int n, int k)
{
    if (depth == n / 2)
    {
        v2.clear();
        for (int i = 1; i <= n; i++) {
			if (start_member[i]) continue;
			v2.push_back(i);
		}
        
        int stat_diff = 0;
        for (int i = 0; i < n / 2; i++)
            for (int j = 0; j < n / 2; j++)
            {
                if (i == j) continue;
                stat_diff += stat[v1[i]][v1[j]];
            }
        for (int i = 0; i < n / 2; i++)
            for (int j = 0; j < n / 2; j++)
            {
                if (i == j) continue;
                stat_diff -= stat[v2[i]][v2[j]];
            }
        
        if (stat_diff < 0) stat_diff *= -1;
        if (stat_diff < min) min = stat_diff;
        return;
    }
    
    for (int i = k + 1; i <= n; i++)
        if (!start_member[i])
        {
            start_member[i] = true;
            v1.push_back(i);
            dfs(depth + 1, n, i);
            v1.pop_back();
            start_member[i] = false;
        }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    stat.resize(n + 1, std::vector<int>(n + 1));
    start_member.assign(n + 1, false);
    
    v1.reserve(n / 2);
    v2.reserve(n / 2);
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            std::cin >> stat[i][j];
    
    dfs(0, n, 0);
    std::cout << min;
}