#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v(9);
    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        std::cin >> v[i];
        sum += v[i];
    }
    std::sort(v.begin(), v.end());
    
    bool flag = false;
    int diff = sum - 100;
    for (int i = 0; i < 8; i++)
    {
        if (flag) break;
        for (int j = i + 1; j < 9; j++)
            if (v[i] + v[j] == diff)
            {
                v.erase(v.begin() + j);
                v.erase(v.begin() + i);
                flag = true;
                break;
            }
    }
    
    for (auto it : v)
        std::cout << it << '\n';
}