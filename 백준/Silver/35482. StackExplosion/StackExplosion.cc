#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    std::vector<int> c(n), m(n);
    for (int i = 0; i < n; i++)
        std::cin >> c[i];
    for (int i = 0; i < n; i++)
        std::cin >> m[i];

    std::vector<std::pair<int, int>> v;

    for (int i = 0; i < n; i++)
        v.push_back({c[i] - m[i], m[i]});

    std::sort(v.begin(), v.end());

    long long add = 0;
    int exploded = 0;

    while (true)
    {
        long long cur = add;
        int next = exploded;

        while (next < n && (long long)v[next].first < cur) next++;

        if (next == exploded) break;

        for (int i = exploded; i < next; i++)
            add += (v[i].second + cur) / 2;

        exploded = next;
    }

    std::cout << exploded;
}