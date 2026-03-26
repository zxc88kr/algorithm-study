#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>
#include <stack>
//  1  1 2 3 4 2  1
//  3  3 2 1 1 2  3
// -1 -1 1 2 2 1 -1
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::vector<std::pair<int, int>> num(n);
    std::unordered_map<int, int> freq;
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i].first;
        freq[num[i].first]++;
    }
    
    for (int i = 0; i < n; i++)
        num[i].second = freq[num[i].first];
    
    std::stack<std::pair<int, int>> st;
    std::vector<int> ngf(n, -1);
    for (int i = n - 1; i >= 0; i--)
    {
        int cur = num[i].second;
        while (!st.empty())
        {
            if (cur < st.top().second)
            {
                ngf[i] = st.top().first;
                break;
            }
            else st.pop();
        }
        st.push(num[i]);
    }
    
    for (int i = 0; i < n; i++)
        std::cout << ngf[i] << ' ';
}