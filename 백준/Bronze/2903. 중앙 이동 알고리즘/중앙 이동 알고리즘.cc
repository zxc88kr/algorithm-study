#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    
    int width = 2;
    for (int i = 0; i < n; i++) {
        width = width * 2 - 1;
    }
    printf("%d", width * width);
}