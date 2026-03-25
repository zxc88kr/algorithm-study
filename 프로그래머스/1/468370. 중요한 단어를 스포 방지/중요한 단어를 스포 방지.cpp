#include <string>
#include <sstream>
#include <vector>
#include <unordered_set>

int solution(std::string message, std::vector<std::vector<int>> spoiler_ranges)
{
    std::string blind_message = message;
    
    for (auto range : spoiler_ranges)
        for (int idx = range[0]; idx <= range[1]; idx++)
            if (blind_message[idx] != ' ')
                blind_message[idx] = '*';
    
    std::unordered_set<std::string> st;
    
    std::stringstream ss(blind_message);
    std::string word;
    
    while (std::getline(ss, word, ' '))
        st.insert(word);
    
    ss.clear();
    ss.str(message);

    int answer = 0;
    while (std::getline(ss, word, ' '))
        if (!st.count(word))
        {
            st.insert(word);
            answer++;
        }
    
    return answer;
}