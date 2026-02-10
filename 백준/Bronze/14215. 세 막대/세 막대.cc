#include <cstdio>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a + b <= c)      c = a + b - 1;
    else if (b + c <= a) a = b + c - 1;
    else if (c + a <= b) b = c + a - 1;
    printf("%d", a + b + c);
}