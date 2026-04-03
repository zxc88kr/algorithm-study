#include <string>
#include <vector>
#include <algorithm>

bool compare(const std::string& a, const std::string& b)
{
    int min_len = std::min(a.size(), b.size());
    
    for (int i = 0; i < min_len; i++)
        if (a[i] != b[i]) return a[i] < b[i];
    
    return a.size() < b.size();
}

std::vector<std::string> lists;
std::vector<char> alpha = { 'A', 'E', 'I', 'O', 'U' };

std::string temp;
void dfs(int depth, int n)
{
    if (depth == n)
    {
        lists.push_back(temp);
        return;
    }
    
    for (int i = 0; i < 5; i++)
    {
        temp.push_back(alpha[i]);
        dfs(depth + 1, n);
        temp.pop_back();
    }
}

int solution(std::string word)
{
    int answer = 0;
    
    for (int i = 1; i <= 5; i++)
        dfs(0, i);
    
    std::sort(lists.begin(), lists.end());
    
    for (int i = 0; i < lists.size(); i++)
        if (lists[i] == word)
        {
            answer = i + 1;
            break;
        }
    
    return answer;
}