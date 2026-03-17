#include <cstdio>
#include <vector>

int gcd(int a, int b) {
    int c = a % b;
    while (c > 0) {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int main() {
    int n;
    scanf("%d", &n);
    
    std::vector<int> point(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &point[i]);
    }
    
    std::vector<int> dist(n - 1);
    for (int i = 0; i < n - 1; i++) {
        dist[i] = point[i + 1] - point[i];
    }
    
    int g = dist[0];
    for (int i = 1; i < n - 1; i++) {
        g = gcd(g, dist[i]);
    }
    
    int need = (point[n - 1] - point[0]) / g + 1;
    printf("%d", need - n);
}