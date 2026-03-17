#include <iostream>
#include <string>

int main() {
    while (true) {
        int n;
        std::cin >>n;
        if (n == 0) break;
        
        bool flag = false;
        std::string str = std::to_string(n);
        for (int i = 0; i < str.length() / 2; i++) {
            if (str[i] != str[str.length() - i - 1]) {
                std::cout << "no\n";
                flag = true;
                break;
            }
        }
        if (!flag) std::cout << "yes\n";
    }
}