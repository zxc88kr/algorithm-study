#include <cstdio>

int pitch()
{
    int first;
    scanf("%d", &first);
    if (first == 1)
    {
        for (int i = 2; i <= 8; i++)
        {
            int temp;
            scanf("%d", &temp);
            if (temp != i)
            {
                printf("mixed");
                return 0;
            }
        }
        printf("ascending");
        return 1;
    }
    else if (first == 8)
    {
        for (int i = 7; i >= 1; i--)
        {
            int temp;
            scanf("%d", &temp);
            if (temp != i)
            {
                printf("mixed");
                return 0;
            }
        }
        printf("descending");
        return -1;
    }
    else printf("mixed");
    return 0;
}

int main()
{
    pitch();
}