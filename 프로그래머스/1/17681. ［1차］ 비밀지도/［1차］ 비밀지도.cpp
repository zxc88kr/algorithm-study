#include <string>
#include <vector>

std::vector<std::string> solution(int n, std::vector<int> arr1, std::vector<int> arr2)
{
    std::vector<int> map(n);
    
    for (int i = 0; i < n; i++)
        map[i] = arr1[i] | arr2[i];
    
    std::vector<std::string> answer;
    
    for (int i = 0; i < n; i++)
    {
        int secret = map[i];
        std::string result = "";
        
        for (int j = 0; j < n; j++)
        {
            if (secret % 2 == 0) result = ' ' + result;
            else result = '#' + result;
            secret /= 2;
        }
        
        answer.push_back(result);
    }
    
    return answer;
}