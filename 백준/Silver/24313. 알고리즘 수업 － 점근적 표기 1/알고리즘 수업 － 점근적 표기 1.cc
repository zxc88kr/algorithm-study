#include <cstdio>

int main() {
    int a1, a0, c, n0;
    scanf("%d %d %d %d", &a1, &a0, &c, &n0);
    if (c - a1 >= 0 && (c - a1) * n0 >= a0) {
        printf("1");
    } else {
        printf("0");
    }
}