#include <cstdio>

int main()
{
    int quiz;
    scanf("%d", &quiz);
    
    for (int i = 0; i < quiz; i++)
    {
        char ox[80];
        scanf("%s", ox);
        
        int temp_score = 0;
        int total_score = 0;
        for (int j = 0; ox[j] != '\0'; j++)
        {
            if (ox[j] == 'O') temp_score++;
            else if (ox[j] == 'X') temp_score = 0;
            total_score += temp_score;
        }
        printf("%d\n", total_score);
    }
}