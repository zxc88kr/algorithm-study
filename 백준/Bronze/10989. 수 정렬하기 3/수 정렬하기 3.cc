#include <cstdio>

int main()
{
    int loop;
    scanf("%d", &loop);
    
    int count[10001] = { 0, };
    for (int i = 0; i < loop; i++)
    {
        int temp;
        scanf("%d", &temp);
        count[temp]++;
    }
    
    for (int i = 1; i < 10001; i++)
        for (int j = 0; j < count[i]; j++)
            printf("%d\n", i);
}