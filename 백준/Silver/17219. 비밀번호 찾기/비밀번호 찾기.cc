#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m;
    std::cin >> n >> m;
    
    std::unordered_map<std::string, std::string> password_log;
    
    std::string site, password;
    for (int i = 0; i < n ; i++)
    {
        std::cin >> site >> password;
        password_log[site] = password;
    }
    
    for (int i = 0; i < m; i++)
    {
        std::cin >> site;
        std::cout << password_log[site] << '\n';
    }
}