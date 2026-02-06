#include <cstdio>

int main()
{
    int set;
    scanf("%d", &set);
    
    for (int i = 0; i < set; i++)
    {
        int loop;
        char ch[21];
        scanf("%d %s", &loop, ch);
        
        for (int j = 0; ch[j] != '\0'; j++)
            for (int k = 0; k < loop; k++)
                printf("%c", ch[j]);
        printf("\n");
    }
}