#include <cstdio>

int main()
{
    int time;
    scanf("%d", &time);
    
    if (time % 10 != 0) printf("-1");
    else
    {
        int a = 0;
        int b = 0;
        int c = 0;
        
        a = time / 300;
        b = (time % 300) / 60;
        c = (time % 60) / 10;
        
        printf("%d %d %d", a, b, c);
    }
}