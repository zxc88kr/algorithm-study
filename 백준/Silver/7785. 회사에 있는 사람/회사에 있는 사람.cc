#include <iostream>
#include <set>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    std::cin >> n;
    std::set<std::string> employee;
    for (int i = 0; i < n; i++) {
        std::string person, access;
        std::cin >> person >> access;
        if (access == "enter") employee.insert(person);
        else                   employee.erase(person);
    }

    for (auto it = employee.rbegin(); it != employee.rend(); it++) {
        std::cout << *it << '\n';
    }
}