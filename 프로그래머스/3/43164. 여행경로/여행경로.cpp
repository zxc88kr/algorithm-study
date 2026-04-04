#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

std::unordered_map<std::string, std::vector<std::pair<std::string, int>>> graph;
std::vector<bool> visited;
std::vector<std::string> path;
std::vector<std::string> answer;

void dfs(const std::string& cur, int visit, int total)
{
    if (!answer.empty()) return;
    
    if (visit == total)
    {
        answer = path;
        return;
    }
    
    for (auto& p : graph[cur])
    {
        std::string next = p.first;
        int idx = p.second;
        
        if (!visited[idx])
        {
            visited[idx] = true;
            path.push_back(next);
            dfs(next, visit + 1, total);
            path.pop_back();
            visited[idx] = false;
        }
    }
}

std::vector<std::string> solution(std::vector<std::vector<std::string>> tickets)
{
    int n = tickets.size();
    
    graph.clear();
    visited.assign(n, false);
    path.clear();
    answer.clear();
    
    for (int i = 0; i < n; i++)
        graph[tickets[i][0]].push_back({ tickets[i][1], i });
    
    for (auto& it : graph)
        std::sort(it.second.begin(), it.second.end());
    
    path.push_back("ICN");
    dfs("ICN", 0, n);
    
    return answer;
}