#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    std::vector<int> arr(n);
    
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    std::sort(arr.begin(), arr.end());
    
    int x;
    std::cin >> x;
    
    int start = 0;
    int end = n - 1;
    
    int count = 0;
    while (start < end)
    {
        int test = arr[start] + arr[end];
        
        if (test < x) start++;
        else if (test > x) end--;
        else if (test == x)
        {
            count++;
            start++;
            end--;
        }
    }
    std::cout << count;
}