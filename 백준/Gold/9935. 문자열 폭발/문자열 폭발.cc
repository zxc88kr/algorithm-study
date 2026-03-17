#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::string str, bomb;
    std::cin >> str >> bomb;
    
    int bomb_len = bomb.size();
    std::string res = "";
    for (char ch : str)
    {
        res += ch;
        int res_len = res.size();
        
        if (res_len >= bomb_len && ch == bomb[bomb_len - 1]
         && res.compare(res_len - bomb_len, bomb_len, bomb) == 0)
            res.erase(res_len - bomb_len, bomb_len);
    }
    
    if (res.empty()) std::cout << "FRULA";
    else std::cout << res;
}