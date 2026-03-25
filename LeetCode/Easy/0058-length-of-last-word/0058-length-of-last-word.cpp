#include <string>
#include <sstream>
#include <cctype>

class Solution
{
public:
    int lengthOfLastWord(std::string s)
    {
        std::stringstream ss(s);

        std::string real_word;
        std::string word;
        
        while (std::getline(ss, word, ' '))
            if (isalpha(word[0])) real_word = word;

        return real_word.size();
    }
};