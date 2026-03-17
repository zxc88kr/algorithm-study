#include <cstdio>
#include <vector>
#include <algorithm>

int gcd(int a, int b)
{
    int c = a % b;
    while (c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int main()
{
    int N;
    scanf("%d", &N);
    
    std::vector<int> num(N);
    for (int i = 0; i < N; i++)
        scanf("%d", &num[i]);
    std::sort(num.begin(), num.end());
    
    int num_gcd = num[1] - num[0];
    for (int i = 2; i < N; i++)
        num_gcd = gcd(num_gcd, num[i] - num[i - 1]);
    
    std::vector<int> result;
    for (int i = 2; i * i <= num_gcd; i++)
        if (num_gcd % i == 0)
        {
            result.push_back(i);
            if (i * i != num_gcd)
                result.push_back(num_gcd / i);
        }
    result.push_back(num_gcd);
    
    std::sort(result.begin(), result.end());
    
    for (auto it : result)
        printf("%d ", it);
}