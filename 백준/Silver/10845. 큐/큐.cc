#include <iostream>
#include <string>
#include <queue>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int n;
    std::cin >> n;
    std::queue<int> que;
    for (int i = 0; i < n; i++) {
        std::string str;
        std::cin >> str;
        if (str == "push") {
            int x;
            std::cin >> x;
            que.push(x);
        } else if (str == "size") {
            std::cout << que.size() << '\n';
        } else if (str == "empty") {
            std::cout << que.empty() * 1 << '\n';
        } else if (que.empty()) {
            std::cout << "-1\n";
        } else if (str == "pop") {
            std::cout << que.front() << '\n';
            que.pop();
        } else if (str == "front") {
            std::cout << que.front() << '\n';
        } else if (str == "back") {
            std::cout << que.back() << '\n';
        }
    }
}