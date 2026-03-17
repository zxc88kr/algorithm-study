#include <cstdio>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> arr(3);
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    
    std::sort(arr.begin(), arr.end());
    printf("%d %d %d", arr[0], arr[1], arr[2]);
}