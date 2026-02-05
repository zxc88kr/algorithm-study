#include <cstdio>

int main()
{
    int hour, minute;
    scanf("%d %d", &hour, &minute);
    if (minute - 45 >= 0) { minute -= 45; }
    else
    {
        if (hour - 1 >= 0) { hour -= 1; }
        else               { hour = 23; }
        minute += 15;
    }
    printf("%d %d", hour, minute);
}