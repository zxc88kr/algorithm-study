#include <iostream>
#include <stack>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int k;
    std::cin >> k;
    
    std::stack<int> st;
    int x;
    for (int i = 0; i < k; i++)
    {
        std::cin >> x;
        if (x == 0) st.pop();
        else st.push(x);
    }
    
    int sum = 0;
    while (!st.empty())
    {
        sum += st.top();
        st.pop();
    }
    std::cout << sum;
}