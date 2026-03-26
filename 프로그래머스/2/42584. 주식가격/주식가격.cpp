#include <vector>
#include <stack>

std::vector<int> solution(std::vector<int> prices)
{
    int size = prices.size();
    
    std::vector<int> answer(size, 0);
    std::stack<int> st;
    
    for (int i = 0; i < size; i++)
    {
        while (!st.empty() && prices[st.top()] > prices[i])
        {
            answer[st.top()] = i - st.top();
            st.pop();
        }
        st.push(i);
    }
    
    while (!st.empty())
    {
        answer[st.top()] = size - st.top() - 1;
        st.pop();
    }
    
    return answer;
}