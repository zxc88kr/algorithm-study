#include <iostream>
#include <string>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string str;
    std::cin >> str;
    int len = str.length();
    std::vector<std::vector<int>> s(len, std::vector<int>(26, 0));

    s[0][(int)(str[0] - 'a')] = 1;
    for (int i = 1; i < len; i++) {
        for (int j = 0; j < 26; j++) {
            s[i][j] = s[i - 1][j];
        }
        s[i][(int)(str[i] - 'a')] = s[i - 1][(int)(str[i] - 'a')] + 1;
    }

    int q;
    std::cin >> q;
    for (int i = 0; i < q; i++) {
        char target;
        int l, r;
        std::cin >> target >> l >> r;
        if (l == 0) {
            std::cout << s[r][(int)(target - 'a')] << '\n';
        } else {
            std::cout << s[r][(int)(target - 'a')] - s[l - 1][(int)(target - 'a')] << '\n';
        }
    }
}