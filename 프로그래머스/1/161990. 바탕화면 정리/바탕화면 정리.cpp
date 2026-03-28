#include <string>
#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<std::string> wallpaper)
{
    std::vector<int> x_list, y_list;
    
    for (int i = 0; i < wallpaper.size(); i++)
        while (wallpaper[i].find("#") != std::string::npos)
        {
            int pos = wallpaper[i].find("#");
            x_list.push_back(i);
            y_list.push_back(pos);
            wallpaper[i].replace(pos, 1, ".");
        }
    
    std::sort(x_list.begin(), x_list.end());
    std::sort(y_list.begin(), y_list.end());
    
    std::vector<int> answer(4);
    
    answer[0] = x_list[0];
    answer[1] = y_list[0];
    answer[2] = x_list.back() + 1;
    answer[3] = y_list.back() + 1;
    
    return answer;
}