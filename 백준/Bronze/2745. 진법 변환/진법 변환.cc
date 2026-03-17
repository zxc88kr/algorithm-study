#include <iostream>
#include <string>
#include <cmath>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string n;
    int b;
    std::cin >> n >> b;

    int size = n.length();
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (n[i] >= 'A') {
            sum += (n[i] - 'A' + 10) * std::pow(b, size - i - 1);
        } else {
            sum += (n[i] - '0') * std::pow(b, size - i - 1);
        }
    }
    std::cout << sum;
}