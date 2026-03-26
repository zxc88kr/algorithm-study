#include <iostream>
#include <vector>
#include <stack>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::vector<int> num(n);
    for (int i = 0; i < n; i++)
        std::cin >> num[i];
    
    std::stack<int> st;
    std::vector<int> nge(n, -1);
    for (int i = n - 1; i >= 0; i--)
    {
        int cur = num[i];
        while (!st.empty())
        {
            int target = st.top();
            if (cur < target)
            {
                nge[i] = target;
                break;
            }
            else st.pop();
        }
        st.push(cur);
    }
    
    for (int i = 0; i < n; i++)
        std::cout << nge[i] << ' ';
}