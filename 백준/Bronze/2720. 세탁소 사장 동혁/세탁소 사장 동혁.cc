#include <cstdio>

int main() {
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        int charge;
        scanf("%d", &charge);
        
        printf("%d ", charge / 25);
        charge %= 25;
        printf("%d ", charge / 10);
        charge %= 10;
        printf("%d ", charge / 5);
        charge %= 5;
        printf("%d\n", charge / 1);
        charge %= 1;
    }
}