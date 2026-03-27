#include <string>
#include <vector>
#include <set>
#include <iterator>
#include <sstream>

std::vector<int> solution(std::vector<std::string> operations)
{
    std::multiset<int> ms;
    
    char ch;
    int num;
    
    for (std::string& oper : operations)
    {
        std::stringstream ss(oper);
        ss >> ch >> num;
        
        if (ch == 'I') ms.insert(num);
        else if (ms.empty()) continue;
        else if (num == 1) ms.erase(*std::prev(ms.end()));
        else if (num == -1) ms.erase(*ms.begin());
    }
    
    std::vector<int> answer(2);
    
    if (!ms.empty())
    {
        answer[0] = *std::prev(ms.end());
        answer[1] = *ms.begin();
    }
    
    return answer;
}