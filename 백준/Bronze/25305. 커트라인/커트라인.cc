#include <cstdio>

int main()
{
    int number;
    int cutline;
    scanf("%d %d", &number, &cutline);
    
    int score[number];
    for (int i = 0; i < number; i++)
        scanf("%d", &score[i]);
    
    for (int i = 0; i < number; i++)
        for (int j = 0; j < number - i - 1; j++)
            if (score[j] < score[j + 1])
            {
                int temp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp;
            }
    
    printf("%d", score[cutline - 1]);
}