#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    
    std::vector<int> asc(n, 1);
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j])
                asc[i] = std::max(asc[i], asc[j] + 1);
    
    std::vector<int> desc(n, 1);
    for (int i = n - 2; i >= 0; i--)
        for (int j = n - 1; j > i; j--)
            if (arr[i] > arr[j])
                desc[i] = std::max(desc[i], desc[j] + 1);
    
    for (int i = 0; i < n; i++)
        asc[i] += desc[i] - 1;
    std::cout << *std::max_element(asc.begin(), asc.end());
}