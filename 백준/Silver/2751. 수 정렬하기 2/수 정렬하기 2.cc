#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int number;
    std::cin >> number;
    
    std::vector<int> v;
    for (int i = 0; i < number; i++)
    {
        int temp;
        std::cin >> temp;
        v.push_back(temp);
    }
    std::sort(v.begin(), v.end());
    
    for (auto it: v)
        std::cout << it << '\n';
}