#include <sstream>

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        std::stringstream ss(s);
        std::string word;

        std::string real_word;
        while (std::getline(ss, word, ' '))
        {
            if (isalpha(word[0])) real_word = word;
            std::cout << real_word << '\n';
        }
        
        return real_word.size();
    }
};