#include <iostream>
#include <vector>
#include <queue>
#include <deque>

int d_func(const int& n)
{
    return (n * 2) % 10000;
}

int s_func(const int& n)
{
    return (n + 9999) % 10000;
}

int l_func(const int& n)
{
    return (n % 1000) * 10 + (n / 1000);
}

int r_func(const int& n)
{
    return (n % 10) * 1000 + (n / 10);
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    std::cin >> t;
    
    const int MAX = 10000;
    
    while (t--)
    {
        int a, b;
        std::cin >> a >> b;
        
        std::vector<bool> visited(MAX, false);
        std::vector<int> parent(MAX, -1);
        std::vector<char> how(MAX, ' ');
        std::queue<int> q;
        
        visited[a] = true;
        parent[a] = a;
        how[a] = ' ';
        q.push(a);
        
        char kind[4] = { 'D', 'S', 'L', 'R' };
        
        while (!q.empty())
        {
            int cur = q.front();
            q.pop();
            
            int nexts[4] = { d_func(cur), s_func(cur), l_func(cur), r_func(cur) };
            for (int i = 0; i < 4; i++)
            {
                int next = nexts[i];
                if (next < 0 || next >= MAX) continue;
                
                if (!visited[next])
                {
                    visited[next] = true;
                    parent[next] = cur;
                    how[next] = kind[i];
                    q.push(next);
                }
            }
        }
        
        std::deque<char> result;
        int cur = b;
        while (parent[cur] != a)
        {
            result.push_front(how[cur]);
            cur = parent[cur];
        }
        result.push_front(how[cur]);
        
        for (char& ch : result)
            std::cout << ch;
        std::cout << '\n';
    }
}