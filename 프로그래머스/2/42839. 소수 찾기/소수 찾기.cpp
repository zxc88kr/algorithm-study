#include <string>
#include <vector>
#include <unordered_set>
#include <cmath>

std::string target;
int len;

std::vector<bool> visited;

std::unordered_set<int> s;
std::string str;

void dfs(int depth, int n)
{
    if (depth == n)
    {
        s.insert(std::stoi(str));
        return;
    }
    
    for (int i = 0; i < len; i++)
        if (!visited[i])
        {
            visited[i] = true;
            str.push_back(target[i]);
            dfs(depth + 1, n);
            str.pop_back();
            visited[i] = false;
        }
}

int solution(std::string numbers)
{
    target = numbers;
    len = numbers.size();
    
    visited.assign(len, false);
    
    for (int i = 1; i <= len; i++)
        dfs(0, i);
    
    int digit = std::pow(10, len);
    
    std::vector<bool> primes(digit, true);
    primes[0] = primes[1] = false;
    
    for (int i = 2; i * i < digit; i++)
        if (primes[i])
            for (int j = i * i; j < digit; j += i)
                primes[j] = false;
    
    int answer = 0;
    for (int x : s)
        if (primes[x]) answer++;
    
    return answer;
}