#include <cstdio>
#include <vector>

std::vector<int> solution(std::vector<int> num_list) {
    std::vector<int> answer;
    
    int odd = 0;
    int even = 0;
    for (auto it : num_list)
    {
        if (it % 2) odd++;
        else even++;
    }
    answer.push_back(even);
    answer.push_back(odd);
    
    return answer;
}