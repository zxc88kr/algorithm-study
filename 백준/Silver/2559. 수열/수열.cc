#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, k;
    std::cin >> n >> k;
    
    std::vector<int> arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        std::cin >> arr[i];
        arr[i] += arr[i - 1];
    }
    
    int max = arr[k] - arr[0];
    for (int i = k + 1; i <= n; i++)
        if (arr[i] - arr[i - k] > max)
            max = arr[i] - arr[i - k];
    std::cout << max;
}