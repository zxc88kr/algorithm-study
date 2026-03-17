#include <cstdio>

int main() {
    long n;
    scanf("%ld", &n);
    printf("%ld\n%d", n * (n - 1) * (n - 2) / 6, 3);
}