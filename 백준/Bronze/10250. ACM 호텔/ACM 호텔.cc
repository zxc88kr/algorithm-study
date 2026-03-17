#include <cstdio>

int main()
{
    int test;
    scanf("%d", &test);
    
    for (int i = 0; i < test; i++)
    {
        int height, width, num;
        scanf("%d %d %d", &height, &width, &num);
        
        int floor, room;
        if (num % height == 0)
        {
            floor = height;
            room = num / height;
        }
        else
        {
            floor = num % height;
            room = num / height + 1;
        }
        
        if (room < 10)
            printf("%d0%d\n", floor, room);
        else
            printf("%d%d\n", floor, room);
    }
}