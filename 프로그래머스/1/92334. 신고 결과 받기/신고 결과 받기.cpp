#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <sstream>

std::vector<int> solution(std::vector<std::string> id_list, std::vector<std::string> report, int k)
{
    std::unordered_map<std::string, std::unordered_set<std::string>> report_list;
    
    std::string from, to;
    for (std::string& rep : report)
    {
        std::stringstream ss(rep);
        ss >> from >> to;
        report_list[from].insert(to);
    }
    
    std::unordered_map<std::string, int> reported;
    for (auto it = report_list.begin(); it != report_list.end(); it++)
        for (auto r : it->second) reported[r]++;
    
    std::unordered_set<std::string> banned;
    for (auto it = reported.begin(); it != reported.end(); it++)
        if (it->second >= k) banned.insert(it->first);
    
    std::vector<int> answer;
    for (int i = 0; i < id_list.size(); i++)
    {
        int count = 0;
        for (auto it : report_list[id_list[i]])
            if (banned.count(it)) count++;
        answer.push_back(count);
    }
    
    return answer;
}