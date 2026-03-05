#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    
    std::vector<int> arr(n + 2);

    arr[1] = 1;
    arr[2] = 2;
    
    for (int i = 3; i <= n; i++)
        arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
    
    std::cout << arr[n];
}