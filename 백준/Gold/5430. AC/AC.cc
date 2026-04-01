#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <deque>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    std::cin >> t;
    
    while (t--)
    {
        std::string p;
        std::cin >> p;
        
        int n;
        std::cin >> n;
        
        std::string str_arr;
        std::cin >> str_arr;
        
        std::deque<std::string> dq;
        
        std::stringstream ss(str_arr.substr(1, str_arr.size() - 2));
        std::string str_num;
        
        while (std::getline(ss, str_num, ','))
            dq.push_back(str_num);
        
        bool is_forward = true;
        std::string answer = "";
        
        for (auto ch : p)
        {
            if (ch == 'R') is_forward ^= true;
            else if (ch == 'D')
            {
                if (dq.empty())
                {
                    answer = "error";
                    break;
                }
                else if (is_forward) dq.pop_front();
                else dq.pop_back();
            }
        }
        
        if (answer != "error")
        {
            answer.push_back('[');
            
            if (is_forward)
            {
                for (int i = 0; i < dq.size(); i++)
                {
                    answer += dq[i];
                    answer.push_back(',');
                }
            }
            else
            {
                for (int i = dq.size() - 1; i >= 0; i--)
                {
                    answer += dq[i];
                    answer.push_back(',');
                }
            }
            
            if (answer.back() == ',') answer.pop_back();
            
            answer.push_back(']');
        }
        
        std::cout << answer << '\n';
    }
}