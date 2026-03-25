#include <cstdio>
#include <vector>

std::vector<int> solution(int denum1, int num1, int denum2, int num2) {
    std::vector<int> answer;

    int denum = (denum1 * num2) + (denum2 * num1);
    int num = num1 * num2;

    int i = 2;
    int divisor = 1;
    while ((denum % i != denum) && (num % i != num))
    {
        if ((denum % i == 0) && (num % i == 0)) divisor = i;
        i++;
    }
    denum /= divisor;
    num /= divisor;

    answer.push_back(denum);
    answer.push_back(num);

    return answer;
}