#include <cstdio>

bool isPrime(long num) {
    if (num == 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    for (long i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        long num;
        scanf("%ld", &num);
        while (true) {
            if (isPrime(num)) {
                printf("%ld\n", num);
                break;
            }
            num++;
        }
    }
}