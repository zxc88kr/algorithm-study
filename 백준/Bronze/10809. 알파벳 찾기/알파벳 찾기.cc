#include <cstdio>

int main()
{
    char ch[100];
    scanf("%s", ch);
    
    for (int c = 'a'; c <= 'z'; c++)
    {
        int i = 0;
        while (ch[i] != '\0')
        {
            if (ch[i] == c) break;
            i++;
        }
        if (ch[i] == '\0') printf("-1 ");
        else printf("%d ", i);
    }
}