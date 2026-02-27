#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    
    for (int k = 0; k < t; k++)
    {
        int n;
        std::cin >> n;

        std::vector<int> sorted;
        std::vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            int x;
            std::cin >> x;

            auto it = std::lower_bound(sorted.begin(), sorted.end(), x);
            sorted.insert(it, x);

            if (i % 2 == 0) ans.push_back(sorted[i / 2]);
        }

        std::cout << ans.size() << '\n';
        for (int i = 0; i < ans.size(); i++)
        {
            std::cout << ans[i];
            if ((i + 1) % 10 == 0) std::cout << '\n';
            else std::cout << ' ';
        }
        std::cout << '\n';
    }
}