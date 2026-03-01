#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::string word;
    
    std::cin >> n >> word;
    
    bool flag = false;
    std::string a, b;
    for (int i = 1; i <= n; i++)
    {
        a = word.substr(0, i);
        b = word.substr(n - i, i);
        
        int count = 0;
        for (int j = 0; j < i; j++)
            if (a[j] != b[j]) count++;
        
        if (count == 1)
        {
            flag = true;
            break;
        }
    }
    if (flag) std::cout << "YES";
    else std::cout << "NO";
}