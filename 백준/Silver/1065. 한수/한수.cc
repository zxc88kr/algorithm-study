#include <cstdio>

bool isHan(int n)
{
    int current, next;
    int diff = -99;
    while (n >= 10)
    {
        current = n % 10;
        next = (n / 10) % 10;
        if (diff != -99 &&
            (current + diff) != next) return false;
        
        diff = next - current;
        n /= 10;
    }
    return true;
}


int main()
{
    int input;
    scanf("%d", &input);
    
    int count = 0;
    for (int i = 1; i <= input; i++)
        if (isHan(i)) count++;
    printf("%d", count);
}