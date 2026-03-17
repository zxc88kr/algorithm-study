#include <cstdio>
#include <algorithm>

int main()
{
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    
    int min = std::min(std::min(x, w - x), std::min(y, h - y));
    printf("%d", min);
}