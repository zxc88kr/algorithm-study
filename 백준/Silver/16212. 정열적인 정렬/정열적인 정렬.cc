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
    std::sort(num.begin(), num.end());
    
    for (auto it : num)
        std::cout << it << ' ';
}