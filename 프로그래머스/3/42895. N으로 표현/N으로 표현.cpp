#include <vector>
#include <unordered_set>

int solution(int N, int number)
{
    std::vector<std::unordered_set<int>> s(9);
    
    for (int i = 1; i <= 8; i++)
    {
        int repeated = 0;
        for (int r = 0; r < i; r++)
            repeated = repeated * 10 + N;
        s[i].insert(repeated);
        
        for (int j = 1; j < i; j++)
            for (int a : s[i - j])
                for (int b : s[j])
                {
                    s[i].insert(a + b);
                    s[i].insert(a - b);
                    s[i].insert(a * b);
                    if (b != 0) s[i].insert(a / b);
                }
        
        if (s[i].count(number)) return i;
    }
    return -1;
}