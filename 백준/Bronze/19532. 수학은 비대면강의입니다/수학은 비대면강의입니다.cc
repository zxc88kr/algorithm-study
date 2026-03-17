#include <cstdio>

int main() {
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    
    int x = (c * e - b * f) / (a * e - b * d);
    int y = (a * f - c * d) / (a * e - b * d);
    printf("%d %d", x, y);
}