#include <iostream>
#include <stack>
#include <utility>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;

    long long total = 0;
    std::stack<std::pair<int, int>> st;

    for (int i = 0; i < n; i++)
    {
        std::pair<int, int> cow = { 0, i };
        std::cin >> cow.first;

        while (!st.empty())
        {
            total += (cow.second - st.top().second + 1);

            if (st.top().first < cow.first) st.pop();
            else break;
        }
        st.push(cow);
    }
    std::cout << total << '\n';
}