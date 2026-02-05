#include <cstdio>

int main()
{
    int hour, minute;
    int cook;
    scanf("%d %d", &hour, &minute);
    scanf("%d", &cook);
    
    hour = (hour + ((minute + cook) / 60)) % 24;
    minute = (minute + cook) % 60;
    printf("%d %d", hour, minute);
}