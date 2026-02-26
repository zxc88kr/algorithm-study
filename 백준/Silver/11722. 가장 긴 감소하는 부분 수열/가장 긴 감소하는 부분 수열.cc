#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    
    std::vector<int> lis;
    for (int i = 0; i < n; i++)
    {
        int val = -arr[i];
        auto it = std::lower_bound(lis.begin(), lis.end(), val);
        if (it == lis.end()) lis.push_back(val);
        else *it = val;
    }
    std::cout << lis.size();
}