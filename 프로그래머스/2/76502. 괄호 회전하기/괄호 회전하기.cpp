#include <string>
#include <vector>
#include <stack>

int solution(std::string s)
{
    int len = s.size();
    s += s;
    
    int count = 0;
    
    for (int i = 0; i < len; i++)
    {
        bool flag = true;
        std::stack<char> st;
        
        for (int j = i; j < i + len; j++)
        {
            char ch = s[j];
            if (ch == '[' || ch == '(' || ch == '{') st.push(ch);
            else if (st.empty())
            {
                flag = false;
                break;
            }
            else if (ch == ']' && st.top() == '[') st.pop();
            else if (ch == ')' && st.top() == '(') st.pop();
            else if (ch == '}' && st.top() == '{') st.pop();
            else
            {
                flag = false;
                break;
            }
        }
        if (flag && st.empty()) count++;
    }
    return count;
}