#include <cstdio>

int main()
{
    int num, key;
    int cycle = 0;
    scanf("%d", &num);
    key = num;
    
    do {
        key = (key % 10) * 10 + ((key / 10) + (key % 10)) % 10;
        cycle++;
    } while (num != key);
    
    printf("%d", cycle);
}