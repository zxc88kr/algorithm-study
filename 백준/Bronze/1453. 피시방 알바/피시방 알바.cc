#include <cstdio>

int main()
{
    int N;
    scanf("%d", &N);
    
    bool seat[101] = { false, };
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        int want;
        scanf("%d", &want);
        
        if (seat[want]) count++;
        else seat[want] = true;
    }
    printf("%d", count);
}