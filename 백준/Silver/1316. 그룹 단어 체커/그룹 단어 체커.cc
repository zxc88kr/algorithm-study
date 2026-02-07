#include <cstdio>

int main()
{
    int set;
    scanf("%d", &set);
    
    int count = 0;
    for (int i = 0; i < set; i++)
    {
        char word[101];
        scanf("%s", word);
        
        bool exist[26] = { false, };
        bool is_group_word = true;
        
        int j = 0;
        while (word[j] != '\0')
        {
            if (exist[word[j] - 97] == true)
            {
                is_group_word = false;
                break;
            }
            else exist[word[j] - 97] = true;
            
            int k = j;
            while (word[++k] == word[j]);
            j = k;
        }
        if (is_group_word) count++;
    }
    printf("%d", count);
}