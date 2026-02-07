#include <cstdio>

int main()
{
    char num1[4], num2[4];
    scanf("%s %s", num1, num2);
    
    char *choice;
    for (int i = 2; i >= 0; i--)
    {
        if (num1[i] > num2[i])
        {
            choice = num1;
            break;
        }
        else if (num1[i] < num2[i])
        {
            choice = num2;
            break;
        }
    }
    
    for (int i = 2; i >= 0; i--)
        printf("%c", choice[i]);
}