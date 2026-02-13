#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int N, M, temp;
    std::cin >> N;
    std::vector<int> have(N);
    for (int i = 0; i < N; i++)
    {
        std::cin >> temp;
        have[i] = temp;
    }
    std::sort(have.begin(), have.end());

    std::cin >> M;
    for (int i = 0; i < M; i++)
    {
        std::cin >> temp;
        if (std::binary_search(have.begin(), have.end(), temp)) std::cout << "1 ";
        else std::cout << "0 ";
    }
}