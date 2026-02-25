#include <iostream>
#include <vector>
#include <stack>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::vector<int> target(n);
    for (int i = 0; i < n; i++)
        std::cin >> target[i];
    
    std::stack<int> st;
    std::vector<char> oper;
    
    int i = 0;
    int idx = 1;
    while (true)
    {
        if (i >= n) break;
        
        if (!st.empty() && st.top() == target[i])
        {
            st.pop();
            oper.push_back('-');
            i++;
        }
        else if (!st.empty() && st.top() > target[i]) break;
        else if (idx > n) break;
        else
        {
            st.push(idx);
            oper.push_back('+');
            idx++;
        }
    }
    
    if (!st.empty()) std::cout << "NO";
    else
    {
        for (auto it : oper)
            std::cout << it << '\n';
    }
}