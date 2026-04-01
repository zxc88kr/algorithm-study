#include <iostream>
#include <string>
#include <string_view>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;

    int m;
    std::cin >> m;

    std::string s;
    std::cin >> s;

    std::string key = "";
    for (int i = 0; i < n; i++)
        key += "IO";
    key += "I";

    std::string_view sv(s);

    int len = key.size();

    int count = 0;
    for (int i = 0; i <= m - len; i++)
        if (sv.substr(i, len) == key) count++;

    std::cout << count;
}