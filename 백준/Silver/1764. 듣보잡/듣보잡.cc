#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, M;
    std::cin >> N >> M;

    std::vector<std::string> n_heard(N);
    std::vector<std::string> n_result;

    for (int i = 0; i < N; i++)
        std::cin >> n_heard[i];
    std::sort(n_heard.begin(), n_heard.end());

    for (int i = 0; i < M; i++)
    {
        std::string n_seen;
        std::cin >> n_seen;
        if (std::binary_search(n_heard.begin(), n_heard.end(), n_seen))
            n_result.push_back(n_seen);
    }
    std::sort(n_result.begin(), n_result.end());

    std::cout << n_result.size() << '\n';
    for (auto it : n_result)
        std::cout << it << '\n';
}