#include <string>
#include <vector>

int string_to_int_time(const std::string& str)
{
    return std::stoi(str.substr(0, 2)) * 60 + std::stoi(str.substr(3, 2));
}

std::string int_to_string_time(int num)
{
    std::string str = std::to_string(num);
    if (num < 10) str = "0" + str;
    
    return str;
}

std::string solution(std::string video_len, std::string pos, std::string op_start, std::string op_end, std::vector<std::string> commands)
{
    int video = string_to_int_time(video_len);
    int cur = string_to_int_time(pos);
    int start = string_to_int_time(op_start);
    int end = string_to_int_time(op_end);
    
    if (cur >= start && cur <= end) cur = end;
    
    for (std::string command : commands)
    {
        if (command == "prev")
        {
            cur -= 10;
            if (cur < 0) cur = 0;
        }
        else if (command == "next")
        {
            cur += 10;
            if (cur > video) cur = video;
        }
        
        if (cur >= start && cur <= end) cur = end;
    }
    
    std::string answer = int_to_string_time(cur / 60) + ":" + int_to_string_time(cur % 60);
    return answer;
}