#include <cstdio>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    
    printf("%d.", A / B);
    A = A % B;
    for (int i = 0; i < 1000; i++)
    {
        A *= 10;
        printf("%d", A / B);
        A = A - (A / B) * B;
    }
}