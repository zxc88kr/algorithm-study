#include <iostream>

int call1, call2;
int f[41];

int fib(int n)
{
    if (n == 1 || n == 2)
    {
        call1++;
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int fibonacci(int n)
{
    f[1] = f[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        call2++;
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

int main()
{
    int n;
    std::cin >> n;
    
    int x = fib(n);
    int y = fibonacci(n);
    
    std::cout << call1 << ' ' << call2;
}