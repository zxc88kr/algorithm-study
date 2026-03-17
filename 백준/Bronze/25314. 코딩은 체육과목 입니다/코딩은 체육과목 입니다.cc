#include <cstdio>

int main()
{
    int N;
    scanf("%d", &N);
    
    int loop = (N + 3) / 4;
    for (int i = 0; i < loop; i++)
        printf("long ");
    printf("int");
}