#include <cstdio>

int main()
{
    int total;
    scanf("%d", &total);
    
    int num[total];
    for (int i = 0; i < total; i++)
        scanf("%d", &num[i]);
    
    int key;
    scanf("%d", &key);
    
    int count = 0;
    for (int i = 0; i < total; i++)
        if (num[i] == key) count++;
    printf("%d", count);
}