#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int N;
    std::cin >> N;
    
    std::vector<int> num(N);
    for (int i = 0; i < N; i++)
        std::cin >> num[i];
    
    std::vector<int> num_s = num;
    std::sort(num_s.begin(), num_s.end());
    num_s.erase(std::unique(num_s.begin(), num_s.end()), num_s.end());
    for (int i = 0; i < N; i++)
    {
        auto it = std::lower_bound(num_s.begin(), num_s.end(), num[i]);
        std::cout << it - num_s.begin() << ' ';
    }
}