#include <cstdio>
#include <vector>
#include <algorithm>

int main() {
    int n;
    scanf("%d", &n);
    
    std::vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    std::sort(x.begin(), x.end());
    std::sort(y.begin(), y.end());
    
    printf("%d", (x[n - 1] - x[0]) * (y[n - 1] - y[0]));
}