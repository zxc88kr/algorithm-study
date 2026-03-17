#include <iostream>
#include <deque>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    std::deque<int> deq;
    
    int n;
    std::cin >> n;
    
    int x;
    std::vector<bool> is_queue(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        is_queue[i] = x ^ 1;
    }
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        if (is_queue[i]) deq.push_front(x);
    }
    
    int m;
    std::cin >> m;
    
    for (int i = 0; i < m; i++)
    {
        std::cin >> x;
        deq.push_back(x);
    }
    
    for (int i = 0; i < m; i++)
    {
        std::cout << deq.front() << ' ';
        deq.pop_front();
    }
}