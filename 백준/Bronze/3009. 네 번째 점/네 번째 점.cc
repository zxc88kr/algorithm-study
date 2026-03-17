#include <cstdio>

int main()
{
    int x[3], y[3];
    for (int i = 0; i < 3; i++)
        scanf("%d %d", &x[i], &y[i]);
    
    int x_target, y_target;
    if      (x[0] == x[1]) x_target = x[2];
    else if (x[0] == x[2]) x_target = x[1];
    else if (x[1] == x[2]) x_target = x[0];
    if      (y[0] == y[1]) y_target = y[2];
    else if (y[0] == y[2]) y_target = y[1];
    else if (y[1] == y[2]) y_target = y[0];
    printf("%d %d", x_target, y_target);
}