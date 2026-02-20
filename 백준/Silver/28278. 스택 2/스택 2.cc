#include <iostream>
#include <stack>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::stack<int> st;
    
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        std::cin >> x;
        if (x == 1)
        {
            std::cin >> x;
            st.push(x);
        }
        else if (x == 2)
        {
            if (st.empty()) std::cout << -1 << '\n';
            else
            {
                std::cout << st.top() << '\n';
                st.pop();
            }
        }
        else if (x == 3)
            std::cout << st.size() << '\n';
        else if (x == 4)
        {
            if (st.empty()) std::cout << 1 << '\n';
            else std::cout << 0 << '\n';
        }
        else if (x == 5)
        {
            if (st.empty()) std::cout << -1 << '\n';
            else std::cout << st.top() << '\n';
        }
    }
}