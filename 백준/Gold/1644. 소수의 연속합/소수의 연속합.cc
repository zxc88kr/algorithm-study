#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n;
    std::cin >> n;
    
    if (n == 1)
    {
        std::cout << 0;
        return 0;
    }
    
    std::vector<bool> num(n + 1, true);
    num[1] = false;
    
    for (int i = 2; i * i <= n; i++)
        if (num[i])
            for (int j = i * i; j <= n; j += i)
                num[j] = false;
    
    std::vector<int> res;
    for (int i = 2; i <= n; i++)
        if (num[i]) res.push_back(i);
    res.push_back(0);
    
    int start = 0;
    int end = 0;
    
    int count = 0;
    int sum = res[0];
    while (start <= end && end < res.size() - 1)
    {
        if (sum == n)
        {
            count++;
            end++;
            sum += res[end];
        }
        else if (sum > n)
        {
            sum -= res[start];
            start++;
        }
        else if (sum < n)
        {
            end++;
            sum += res[end];
        }
    }
    std::cout << count;
}