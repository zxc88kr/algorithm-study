#include <string>
#include <vector>

class Solution
{
public:
    std::string intToRoman(int num)
    {
        std::string answer;

        std::vector<std::string> symbol = { "M", "CM", "D", "CD", "C", "XC",
                                            "L", "XL", "X", "IX", "V", "IV", "I" };
        std::vector<int> value = { 1000, 900, 500, 400, 100, 90,
                                   50, 40, 10, 9, 5, 4, 1 };

        for (int i = 0; i < 13; i++)
        {
            std::string temp_symbol = symbol[i];
            int temp_value = value[i];

            while (num >= temp_value)
            {
                answer += temp_symbol;
                num -= temp_value;
            }
        }

        return answer;
    }
};