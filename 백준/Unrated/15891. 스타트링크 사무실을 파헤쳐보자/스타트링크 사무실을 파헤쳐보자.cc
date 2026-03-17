#include <cstdio>

int main()
{
    int question;
    scanf("%d", &question);
    
    int answer[5] = {65, 17, 4, 4, 64};
    printf("%d", answer[question - 1]);
}