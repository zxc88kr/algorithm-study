#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
    while (true) {
        int n;
        scanf("%d", &n);
        if (n == -1) break;
        
        int sum = 1;
        std::vector<int> divisor;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                sum += i;
                divisor.push_back(i);
                if (n != i * i) {
                    sum += n / i;
                    divisor.push_back(n / i);
                }
            }
        }
        
        if (sum != n) {
            printf("%d is NOT perfect.\n", n);
        } else {
            std::sort(divisor.begin(), divisor.end());
            printf("%d = 1", n);
            for (auto it : divisor) {
                printf(" + %d", it);
            }
            printf("\n");
        }
    }
}