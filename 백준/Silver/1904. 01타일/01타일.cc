#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int arr[1000001];
    arr[1] = 1;
    arr[2] = 2;
    
    for (int i = 3; i <= 1000000; i++)
        arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;
    
    int n;
    std::cin >> n;
    
    std::cout << arr[n];
}