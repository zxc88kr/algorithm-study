#include <iostream>
#include <stack>

int main()
{
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
    int temp;
    while (!st.empty())
    {
        temp = st.top();
        sum += temp;
        st.pop();
    }
    std::cout << sum;
}