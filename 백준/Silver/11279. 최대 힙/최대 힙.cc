#include <iostream>
#include <queue>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    int x;
    std::priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        if (x == 0)
        {
            if (!pq.empty())
            {
                std::cout << pq.top() << '\n';
                pq.pop();
            }
            else std::cout << 0 << '\n';
        }
        else pq.push(x);
    }
}