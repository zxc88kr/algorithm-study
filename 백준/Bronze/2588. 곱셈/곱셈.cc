#include <cstdio>

int main()
{
    int num1, num2;
    int hun, ten, one;
    
    scanf("%d %d", &num1, &num2);
    hun = num2 / 100;
    ten = (num2 % 100) / 10;
    one = (num2 % 100) % 10;
    
    printf("%d\n", num1 * one);
    printf("%d\n", num1 * ten);
    printf("%d\n", num1 * hun);
    printf("%d", num1 * num2);
}