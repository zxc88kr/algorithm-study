#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int N, M;
    std::cin >> N >> M;
    std::vector<std::string> dict(N);
    for (int i = 0; i < N; i++)
    {
        std::string str;
        std::cin >> str;
        dict[i] = str;
    }
    std::sort(dict.begin(), dict.end());

    int count = 0;
    for (int i = 0; i < M; i++)
    {
        std::string str;
        std::cin >> str;
        if (std::binary_search(dict.begin(), dict.end(), str)) count++;
    }
    printf("%d", count);
}