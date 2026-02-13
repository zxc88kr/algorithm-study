#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m;
    std::cin >> n >> m;

    std::vector<std::string> dict(n);
    for (int i = 0; i < n; i++)
        std::cin >> dict[i];
    std::sort(dict.begin(), dict.end());
    
    int count = 0;
    std::string str;
    for (int i = 0; i < m; i++)
    {
        std::cin >> str;
        if (std::binary_search(dict.begin(), dict.end(), str)) count++;
    }
    std::cout << count;
}