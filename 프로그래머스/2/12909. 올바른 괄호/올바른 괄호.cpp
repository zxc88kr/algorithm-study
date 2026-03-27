#include <string>
#include <stack>

bool solution(std::string s)
{
    bool answer = true;
    
    std::stack<char> st;
    
    for (char ch : s)
    {
        if (ch == '(') st.push(ch);
        else if (st.empty() || st.top() != '(') return false;
        else st.pop();
    }
    
    if (!st.empty()) answer = false;

    return answer;
}