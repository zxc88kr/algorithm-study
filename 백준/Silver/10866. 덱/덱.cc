#include <iostream>
#include <string>
#include <deque>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int n;
    std::cin >> n;
    std::deque<int> deq;
    for (int i = 0; i < n; i++) {
        std::string str;
        std::cin >> str;
        if (str == "push_front") {
            int x;
            std::cin >> x;
            deq.push_front(x);
        } else if (str == "push_back") {
            int x;
            std::cin >> x;
            deq.push_back(x);
        } else if (str == "size") {
            std::cout << deq.size() << '\n';
        } else if (str == "empty") {
            std::cout << deq.empty() * 1 << '\n';
        } else if (deq.empty()) {
            std::cout << "-1\n";
        } else if (str == "pop_front") {
            std::cout << deq.front() << '\n';
            deq.pop_front();
        } else if (str == "pop_back") {
            std::cout << deq.back() << '\n';
            deq.pop_back();
        } else if (str == "front") {
            std::cout << deq.front() << '\n';
        } else if (str == "back") {
            std::cout << deq.back() << '\n';
        }
    }
}