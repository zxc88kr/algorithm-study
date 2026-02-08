#include <cstdio>
#include <cmath>

void hanoi(int n, int sou, int des, int aux)
{
    if (n <= 0) return;
    hanoi(n - 1, sou, aux, des);
    printf("%d %d\n", sou, des);
    hanoi(n - 1, aux, des, sou);
}

int main()
{
    int k;
    scanf("%d", &k);
    
    printf("%d\n", (int)std::pow(2, k) - 1);
    hanoi(k, 1, 3, 2);
}