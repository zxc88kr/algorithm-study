#include <iostream>
#include <deque>
#include <utility>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::deque<std::pair<int, int>> deq;
    int x;
    for (int i = 1; i <= n; i++)
    {
        std::cin >> x;
        deq.push_back({x, i});
    }
    
    while (deq.size() > 1)
    {
        std::pair<int, int>& p = deq.front();
        x = p.first;
        std::cout << p.second << ' ';
        deq.pop_front();
        
        if (x > 0)
            for (int i = 0; i < x - 1; i++)
            {
                deq.push_back(deq.front());
                deq.pop_front();
            }
        else
            for (int i = 0; i > x; i--)
            {
                deq.push_front(deq.back());
                deq.pop_back();
            }
    }
    std::cout << deq.front().second;
}