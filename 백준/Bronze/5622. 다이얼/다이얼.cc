#include <cstdio>

int main()
{
    char words[16];
    scanf("%s", words);
    
    int time = 0;
    for (int i = 0; words[i] != '\0'; i++)
    {
        if (words[i] >= 'A' && words[i] <= 'C') time += 3;
        else if (words[i] >= 'D' && words[i] <= 'F') time += 4;
        else if (words[i] >= 'G' && words[i] <= 'I') time += 5;
        else if (words[i] >= 'J' && words[i] <= 'L') time += 6;
        else if (words[i] >= 'M' && words[i] <= 'O') time += 7;
        else if (words[i] >= 'P' && words[i] <= 'S') time += 8;
        else if (words[i] >= 'T' && words[i] <= 'V') time += 9;
        else if (words[i] >= 'W' && words[i] <= 'Z') time += 10;
    }
    printf("%d", time);
}