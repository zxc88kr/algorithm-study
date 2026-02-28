#include <string>
#include <vector>

std::vector<int> solution(std::vector<int> numbers) {
    int num_size = numbers.size();
    std::vector<int> answer(num_size, -1);
    
    for (int i = num_size - 2; i >= 0; i--)
        for (int j = i + 1; j < num_size; j++)
        {
            if (numbers[i] < numbers[j])
            {
                answer[i] = numbers[j];
                break;
            }
            else if (numbers[i] < answer[j])
            {
                answer[i] = answer[j];
                break;
            }
            else if (answer[j] == -1) break;
        }
    
    return answer;
}