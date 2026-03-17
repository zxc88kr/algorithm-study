#include <iostream>
#include <string>
#include <stack>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    std::cin >> n;
    std::stack<int> st;
    for (int i = 0; i < n; i++) {
        std::string str;
        std::cin >> str;
        if (str == "push") {
            int x;
            std::cin >> x;
            st.push(x);
        } else if (str == "pop") {
            if (st.empty()) {
                std::cout << "-1\n";
            } else {
                std::cout << st.top() << '\n';
                st.pop();
            }
        } else if (str == "size") {
            std::cout << st.size() << '\n';
        } else if (str == "empty") {
            if (st.empty()) {
                std::cout << "1\n";
            } else {
                std::cout << "0\n";
            }
        } else if (str == "top") {
            if (st.empty()) {
                std::cout << "-1\n";
            } else {
                std::cout << st.top() << '\n';
            }
        }
    }
}