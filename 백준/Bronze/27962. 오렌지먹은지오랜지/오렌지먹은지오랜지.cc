#include <iostream>
#include <string>
#include <string_view>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::string word;
    std::cin >> n >> word;
    
    bool flag = false;
    std::string_view sv(word);
    for (int i = 1; i <= n; i++)
    {
        std::string_view a = sv.substr(0, i);
        std::string_view b = sv.substr(n - i, i);
        
        int diff = 0;
        for (int j = 0; j < i; j++)
            if (a[j] != b[j])
            {
                diff++;
                if (diff > 1) break;
            }
        
        if (diff == 1)
        {
            flag = true;
            break;
        }
    }
    if (flag) std::cout << "YES";
    else std::cout << "NO";
}