#include <cstdio>

int main()
{
    int total, key;
    scanf("%d %d", &total, &key);
    
    int num[total];
    for (int i = 0; i < total; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] < key) printf("%d ", num[i]);
    }
}