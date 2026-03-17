#include <cstdio>

int main() {
    long n;
    scanf("%ld", &n);
    printf("%ld\n%ld", n * (n - 1) / 2, 2);
}