#include <cstdio>

int main()
{
    int loop;
    scanf("%d", &loop);
    
    bool paper[100][100] = { false, };
    
    for (int i = 0; i < loop; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        
        for (int i = x; i < x + 10; i++)
            for (int j = y; j < y + 10; j++)
                paper[i][j] = true;
    }
    
    int count = 0;
    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            if (paper[i][j]) count++;
    printf("%d", count);
}