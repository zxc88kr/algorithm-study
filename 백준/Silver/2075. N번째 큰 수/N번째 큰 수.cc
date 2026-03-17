#include <iostream>
#include <queue>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    int x;
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
    for (int i = 0; i < n * n; i++)
    {
        std::cin >> x;
        pq.push(x);
        if (pq.size() > n) pq.pop();
    }
    std::cout << pq.top();
}