#include <string>
#include <vector>
#include <queue>

bool is_one_diff(const std::string& s1, const std::string& s2)
{
    int s_size = s1.size();
    int diff = 0;
    
    for (int i = 0; i < s_size; i++)
        if (s1[i] != s2[i]) diff++;
    
    return (diff == 1);
}

int solution(std::string begin, std::string target, std::vector<std::string> words)
{
    int w_size = words.size();
    
    std::vector<bool> visited(w_size, false);
    std::queue<std::string> q;
    
    q.push(begin);
    
    int step = -1;
    
    while (!q.empty())
    {
        step++;
        int q_size = q.size();
        
        for (int k = 0; k < q_size; k++)
        {
            std::string cur = q.front();
            q.pop();
            
            if (cur == target) return step;
            
            for (int i = 0; i < w_size; i++)
                if (!visited[i] && is_one_diff(cur, words[i]))
                {
                    visited[i] = true;
                    q.push(words[i]);
                }
        }
    }
    
    return 0;
}