#include <cstdio>

int main()
{
    char ch[1000001];
    scanf("%s", ch);
    
    int alpha[26] = { 0, };
    for (int i = 0; ch[i] != '\0'; i++)
        alpha[((int)ch[i] - 1) % 32] += 1;
    
    char more_used_alpha;
    int max = 0;
    int copy = 0;
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] > max)
        {
            more_used_alpha = (char)(i + 65);
            max = alpha[i];
            copy = 1;
        }
        else if (alpha[i] == max) copy += 1;
    }
    if (copy > 1) printf("?");
    else printf("%c", more_used_alpha);
}
    
    