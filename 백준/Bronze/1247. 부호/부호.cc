#include <iostream>
#include <climits>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    for (int i = 0; i < 3; i++)
    {
        int N;
        std::cin >> N;
        
        int overflow = 0;
        long long result = 0;
        for (int j = 0; j < N; j++)
        {
            long long num;
            std::cin >> num;
            if (result > 0 && num > 0 && num > LLONG_MAX - result)
                overflow++;
            else if (result < 0 && num < 0 && num < LLONG_MIN - result)
                overflow--;
            result += num;
        }
        
        if (overflow > 0) std::cout << "+\n";
        else if (overflow < 0) std::cout << "-\n";
        else if (result > 0) std::cout << "+\n";
        else if (result == 0) std::cout << "0\n";
        else if (result < 0) std::cout << "-\n";
    }
}