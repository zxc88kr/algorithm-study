#include <iostream>
#include <queue>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::queue<int> q;
    std::string str;
    int x;
    for (int i = 0; i < n; i++)
    {
        std::cin >> str;
        if (str == "push")
        {
            std::cin >> x;
            q.push(x);
        }
        else if (str == "pop")
        {
            if (q.empty()) std::cout << -1 << '\n';
            else
            {
                std::cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (str == "size")
            std::cout << q.size() << '\n';
        else if (str == "empty")
        {
            if (q.empty()) std::cout << 1 << '\n';
            else std::cout << 0 << '\n';
        }
        else if (str == "front")
        {
            if (q.empty()) std::cout << -1 << '\n';
            else std::cout << q.front() << '\n';
        }
        else if (str == "back")
        {
            if (q.empty()) std::cout << -1 << '\n';
            else std::cout << q.back() << '\n';
        }
    }
}