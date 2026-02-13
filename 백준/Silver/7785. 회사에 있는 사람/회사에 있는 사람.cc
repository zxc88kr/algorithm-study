#include <iostream>
#include <string>
#include <set>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::set<std::string, std::greater<std::string>> st;
    std::string name, status;
    for (int i = 0; i < n; i++)
    {
        std::cin >> name >> status;
        if (status == "enter") st.insert(name);
        else st.erase(name);
    }
    
    for (auto it : st)
        std::cout << it << '\n';
}