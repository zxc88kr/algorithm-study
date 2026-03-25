#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

bool comp(int n1, int n2)
{
    return n1 > n2;
}

std::vector<int> solution(std::vector<int> emergency) {
    std::vector<int> answer;
    std::vector<int> temp = emergency;
    std::sort(temp.begin(), temp.end(), comp);

    for(int i = 0; i < emergency.size(); i++)
        for(int j = 0; j < temp.size(); j++)
            if(emergency[i] == temp[j])
            {
                answer.push_back(j + 1);
                break;
            }

    return answer;
}