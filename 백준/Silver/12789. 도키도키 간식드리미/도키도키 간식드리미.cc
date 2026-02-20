#include <iostream>
#include <queue>
#include <stack>

int main()
{
    int n;
    std::cin >> n;
    
    std::queue<int> q;
    int temp;
    for (int i = 0; i < n; i++)
    {
        std::cin >> temp;
        q.push(temp);
    }
    
    std::stack<int> st;
    for (int i = 1; i <= n; i++)
    {
        if (!q.empty() && q.front() == i) q.pop();
        else if (!st.empty() && st.top() == i) st.pop();
        else if (!q.empty())
        {
            st.push(q.front());
            q.pop();
            i--;
        }
        else
        {
            std::cout << "Sad";
            return 0;
        }
    }
    std::cout << "Nice";
}