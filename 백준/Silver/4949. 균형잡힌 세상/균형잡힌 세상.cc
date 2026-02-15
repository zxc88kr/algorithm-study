#include <iostream>
#include <string>
#include <stack>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::string str;
    while (true)
    {
        std::getline(std::cin, str);
        if (str == ".") break;
        
        std::stack<char> st;
        bool flag = true;
        for (auto ch : str)
        {
            if (ch == '(' || ch == '[')
                st.push(ch);
            else if (ch == ')')
            {
                if (!st.empty() && st.top() == '(')
                    st.pop();
                else
                {
                    flag = false;
                    break;
                }
            }
            else if (ch == ']')
            {
                if (!st.empty() && st.top() == '[')
                    st.pop();
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        
        if (flag && st.empty()) std::cout << "yes\n";
        else std::cout << "no\n";
    }
}