#include <iostream>
#include <deque>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::deque<int> deq;
    int x;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        if (x == 1)
        {
            std::cin >> x;
            deq.push_front(x);
        }
        else if (x == 2)
        {
            std::cin >> x;
            deq.push_back(x);
        }
        else if (x == 3)
        {
            if (deq.empty()) std::cout << -1 << '\n';
            else
            {
                std::cout << deq.front() << '\n';
                deq.pop_front();
            }
        }
        else if (x == 4)
        {
            if (deq.empty()) std::cout << -1 << '\n';
            else
            {
                std::cout << deq.back() << '\n';
                deq.pop_back();
            }
        }
        else if (x == 5)
            std::cout << deq.size() << '\n';
        else if (x == 6)
        {
            if (deq.empty()) std::cout << 1 << '\n';
            else std::cout << 0 << '\n';
        }
        else if (x == 7)
        {
            if (deq.empty()) std::cout << -1 << '\n';
            else std::cout << deq.front() << '\n';
        }
        else if (x == 8)
        {
            if (deq.empty()) std::cout << -1 << '\n';
            else std::cout << deq.back() << '\n';
        }
    }
}