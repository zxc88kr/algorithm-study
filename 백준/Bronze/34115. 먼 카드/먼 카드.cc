#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    
    std::vector<int> v(2 * n + 1);
    for (int i = 1; i <= 2 * n; i++)
        std::cin >> v[i];
    
    int max = -1;
    for (int i = 1; i <= n; i++)
    {
        int idx = -1;
        for (int j = 1; j <= 2 * n; j++)
        {
            if (v[j] != i) continue;
            if (idx > 0) max = j - idx - 1 > max ? j - idx - 1 : max;
            else idx = j;
        }
    }
    std::cout << max;
}