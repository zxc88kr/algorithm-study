#include <cstdio>

int main()
{
    int total, item;
    int sum = 0;
    scanf("%d %d", &total, &item);
    for (int i = 0; i < item; i++)
    {
        int price, count;
        scanf("%d %d", &price, &count);
        sum += price * count;
    }
    if (total == sum) printf("Yes");
    else              printf("No");
}