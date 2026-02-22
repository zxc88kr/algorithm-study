#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map<std::string, bool> m;
    
    int n;
    std::cin >> n;
    
    int count = 0;
    std::string str;
    for (int i = 0; i < n; i++)
    {
        std::cin >> str;
        if (str == "ENTER") m.clear();
        else if (!m[str])
        {
            m[str] = true;
            count++;
        }
    }
    std::cout << count;
}