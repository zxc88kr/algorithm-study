#include <iostream>
#include <string>

long long solution(std::string numbers) {
    long long answer = 0;
    std::string str[10] = { "zero", "one", "two", "three", "four",
                            "five", "six", "seven", "eight", "nine" };
    while (numbers.length() > 0)
        for (int i = 0; i < 10; i++)
            if (numbers.substr(0, str[i].length()) == str[i])
            {
                answer = answer * 10 + i;
                numbers = numbers.substr(str[i].length());
            }
    return answer;
}