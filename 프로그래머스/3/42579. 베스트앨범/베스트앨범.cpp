#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

std::unordered_map<std::string, int> total;

bool compareGenre(const std::string& a, const std::string& b)
{
    return total[a] > total[b];
}

bool compareSong(const std::pair<int, int>& a, const std::pair<int, int>& b)
{
    if (a.first != b.first) return a.first > b.first;
    return a.second < b.second;
}

std::vector<int> solution(std::vector<std::string> genres, std::vector<int> plays)
{
    std::unordered_map<std::string, std::vector<std::pair<int, int>>> music;
    
    for (int i = 0; i < genres.size(); i++)
    {
        music[genres[i]].push_back({plays[i], i});
        total[genres[i]] += plays[i];
    }
    
    std::vector<std::string> genreList;
    for (auto& p : total)
        genreList.push_back(p.first);
    
    std::sort(genreList.begin(), genreList.end(), compareGenre);
    
    for (auto& p : music)
        std::sort(p.second.begin(), p.second.end(), compareSong);
    
    std::vector<int> answer;
    
    for (const std::string& genre : genreList)
    {
        answer.push_back(music[genre][0].second);
        if (music[genre].size() > 1)
            answer.push_back(music[genre][1].second);
    }
    
    return answer;
}