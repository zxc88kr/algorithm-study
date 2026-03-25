#include <string>
#include <algorithm>
#include <climits>

class Solution {
public:
    int reverse(long long x)
    {
        bool is_minus = false;
        if (x < 0)
        {
            is_minus = true;
            x *= -1;
        }

        std::string str = std::to_string(x);
        std::reverse(str.begin(), str.end());
        
        long long test = std::stol(str);
        if (is_minus) test *= -1;

        if (test > INT_MAX || test < INT_MIN) return 0;

        return (int)test;
    }
};