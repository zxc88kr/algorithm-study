#include <cstdio>

int main()
{
    char word[101];
    scanf("%s", word);
    
    int i = 0;
    int count = 0;
    while (word[i] != '\0')
    {
        if (word[i] == 'c' && word[i + 1] == '=') i += 2;
        else if (word[i] == 'c' && word[i + 1] == '-') i += 2;
        else if (word[i] == 'd' && word[i + 1] == 'z' && word[i + 2] == '=') i += 3;
        else if (word[i] == 'd' && word[i + 1] == '-') i += 2;
        else if (word[i] == 'l' && word[i + 1] == 'j') i += 2;
        else if (word[i] == 'n' && word[i + 1] == 'j') i += 2;
        else if (word[i] == 's' && word[i + 1] == '=') i += 2;
        else if (word[i] == 'z' && word[i + 1] == '=') i += 2;
        else i++;
        count++;
    }
    printf("%d", count);
}