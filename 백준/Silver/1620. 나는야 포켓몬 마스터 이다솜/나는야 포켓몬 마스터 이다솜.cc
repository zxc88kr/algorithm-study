#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m;
    std::cin >> n >> m;
    
    std::unordered_map<std::string, int> pocket_to_num;
    std::vector<std::string> num_to_pocket(n + 1);
    
    for (int i = 1; i <= n; i++)
    {
        std::cin >> num_to_pocket[i];
        pocket_to_num[num_to_pocket[i]] = i;
    }
    
    std::string str;
    for (int i = 0; i < m; i++)
    {
        std::cin >> str;
        if (std::isdigit(str[0]))
            std::cout << num_to_pocket[std::stoi(str)] << '\n';
        else
            std::cout << pocket_to_num[str] << '\n';
    }
}