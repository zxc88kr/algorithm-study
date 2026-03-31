#include <vector>
#include <algorithm>

std::vector<int> num(5);

int answer;

void combination(int depth, int cur, int n, std::vector<std::vector<int>>& q, std::vector<int>& ans)
{
    if (depth == 5)
    {
        bool check = true;
        
        for (int i = 0; i < q.size(); i++)
        {
            int count = 0;
            
            for (int j = 0; j < 5; j++)
                if (std::binary_search(num.begin(), num.end(), q[i][j])) count++;
            
            if (count != ans[i])
            {
                check = false;
                break;
            }
        }
        if (check) answer++;
        return;
    }
    
    for (int i = cur; i <= n; i++)
    {
        num[depth] = i;
        combination(depth + 1, i + 1, n, q, ans);
    }
    
}

int solution(int n, std::vector<std::vector<int>> q, std::vector<int> ans)
{
    answer = 0;
    
    combination(0, 1, n, q, ans);
    
    return answer;
}