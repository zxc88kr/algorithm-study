#include <string>
#include <vector>
#include <algorithm>

int solution(std::string name)
{
    int n = name.size();
    
    int v_move = 0;
    
    for (int i = 0; i < n; i++)
        v_move += std::min(name[i] - 'A', 'Z' - name[i] + 1);
    
    int h_move = n - 1;
    
    for (int i = 0; i < n; i++)
    {
        int next = i + 1;
        while (next < n && name[next] == 'A') next++;

        h_move = std::min(h_move, i * 2 + (n - next));
        h_move = std::min(h_move, i + (n - next) * 2);
    }
    
    int answer = v_move + h_move;
    
    return answer;
}