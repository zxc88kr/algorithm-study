class Solution
{
public:
    int lengthOfLastWord(std::string s)
    {
        std::stringstream ss(s);
        std::string word;

        std::string real_word;
        while (std::getline(ss, word, ' '))
            if (isalpha(word[0])) real_word = word;

        return real_word.size();
    }
};