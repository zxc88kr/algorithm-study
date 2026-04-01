#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
#include <cmath>

int main()
{
    int n;
    std::cin >> n;
    
    std::vector<int> fruits(n);
    for (int i = 0; i < n; i++)
        std::cin >> fruits[i];
    
    std::unordered_map<int, int> m;
    
    int start = 0;
    int end = 0;
    int max_count = 0;
    
    while (start <= end)
    {
        if (m.size() <= 2)
        {
            max_count = std::max(max_count, end - start);
            
            if (end == n) break;
            
            m[fruits[end]]++;
            end++;
        }
        else
        {
            m[fruits[start]]--;
            
            if (m[fruits[start]] == 0) m.erase(fruits[start]);
            
            start++;
        }
    }
    
    std::cout << max_count;
}