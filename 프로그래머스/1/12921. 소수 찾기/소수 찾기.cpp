#include <vector>

int solution(int n)
{
    std::vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    
    for (int i = 0; i * i <= n; i++)
        if (prime[i])
            for (int j = 2 * i; j <= n; j += i)
                prime[j] = false;
    
    int answer = 0;
    for (int i = 1; i <= n; i++)
        if (prime[i]) answer++;
    
    return answer;
}