#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    int n;
    std::cin >> n;
    
    std::unordered_set<std::string> st;
    std::string topping;
    for (int i = 0; i < n; i++)
    {
        std::cin >> topping;
        if (topping.size() < 6) continue;
        if (topping.substr(topping.size() - 6, 6) == "Cheese")
            st.insert(topping);
    }
    std::cout << ((st.size() >= 4) ? "yummy" : "sad");
}