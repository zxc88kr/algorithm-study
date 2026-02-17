#include <cstdio>

int lcm(int a, int b) {
    int c = a % b;
    while (c > 0) {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int cm = lcm(a * d + b * c, b * d);
    printf("%d %d", (a * d + b * c) / cm, (b * d) / cm);
}