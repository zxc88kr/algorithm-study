#include <cstdio>
#include <queue>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    std::queue<int> que;
    for (int i = 0; i < n; i++) {
        que.push(i + 1);
    }

    printf("<");
    while (que.size() > 1) {
        for (int i = 0; i < k - 1; i++) {
            que.push(que.front());
            que.pop();
        }
        printf("%d, ", que.front());
        que.pop();
    }
    printf("%d>", que.front());
}