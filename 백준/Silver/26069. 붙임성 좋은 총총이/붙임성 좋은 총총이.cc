#include <iostream>
#include <set>
#include <string>

int main()
{
    std::set<std::string> s;
    s.insert("ChongChong");
    
    int n;
    std::cin >> n;
    
    std::string str1, str2;
    for (int i = 0; i < n; i++)
    {
        std::cin >> str1 >> str2;
        if (s.find(str1) != s.end()) s.insert(str2);
        else if (s.find(str2) != s.end()) s.insert(str1);
    }
    std::cout << s.size();
}