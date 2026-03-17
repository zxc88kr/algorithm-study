#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;

    std::vector<std::pair<int, int>> schedule(n);
    for (int i = 0; i < n; i++)
        std::cin >> schedule[i].second >> schedule[i].first;
    std::sort(schedule.begin(), schedule.end());
    
    int count = 1;
    int finish = schedule[0].first;
    for (int i = 1; i < n; i++)
        if (finish <= schedule[i].second)
        {
            count++;
            finish = schedule[i].first;
        }
    std::cout << count;
}