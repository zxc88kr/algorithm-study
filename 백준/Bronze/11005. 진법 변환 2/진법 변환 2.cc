#include <cstdio>

void trans(int n, int b) {
    if (n / b > 0) trans(n / b, b);

    int result = n % b;
    if (result >= 10) printf("%c", (char)('A' + result - 10));
    else              printf("%d", result);
}

int main() {
    int n, b;
    scanf("%d %d", &n, &b);
    trans(n, b);
}