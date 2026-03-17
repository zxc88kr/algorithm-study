#include <iostream>
#include <map>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int T;
    std::cin >> T;
    for (int loop = 0; loop < T; loop++)
    {
        int n;
        std::cin >> n;
        std::map<std::string, int> clothes;
        for (int i = 0; i < n; i++)
        {
            std::string name, tag;
            std::cin >> name >> tag;
            if (clothes.find(tag) != clothes.end()) clothes[tag]++;
            else clothes[tag] = 1;
        }

        int cases = 1;
        for (auto it = clothes.begin(); it != clothes.end(); it++)
            cases *= (it->second + 1);
        std::cout << cases - 1 << '\n';
    }
}