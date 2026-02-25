#include <iostream>
#include <queue>
#include <utility>

int main()
{
    int t;
    std::cin >> t;
    
    for (int k = 0; k < t; k++)
    {
        int n, m;
        std::cin >> n >> m;
        
        std::queue<std::pair<int, int>> q;
        std::priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            int x;
            std::cin >> x;
            
            q.push({i, x});
            pq.push(x);
        }
        
        int print_order = 0;
        while (!q.empty())
        {
            int idx = q.front().first;
            int prior = q.front().second;
            
            q.pop();
            
            if (prior != pq.top()) q.push({idx, prior});
            else
            {
                print_order++;
                pq.pop();
                
                if (idx == m)
                {
                    std::cout << print_order << '\n';
                    break;
                }
            }
        }
    }
}