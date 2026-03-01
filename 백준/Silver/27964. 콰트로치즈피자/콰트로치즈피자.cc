#include <iostream>
#include <unordered_set>
#include <string>

int main()
{
    int n;
    std::cin >> n;
    
    std::unordered_set<std::string> st;
    std::string str;
    for (int i = 0; i < n; i++)
    {
        std::cin >> str;
        st.insert(str);
    }
    
    int count = 0;
    for (auto topping : st)
    {
        if (topping.size() < 6) continue;
        if (topping.substr(topping.size() - 6, 6) == "Cheese") count++;
        if (count == 4) break;
    }
    std::cout << ((count == 4) ? "yummy" : "sad");
}