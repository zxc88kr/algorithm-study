#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    
    int opened = 0;
    for (int i = 1; i * i <= n; i++) {
        opened++;
    }
    printf("%d", opened);
}