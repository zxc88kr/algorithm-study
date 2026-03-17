#include <cstdio>

int main()
{
    int student[30] = { 0, };
    for (int i = 0; i < 28; i++)
    {
        int id;
        scanf("%d", &id);
        student[id - 1] = 1;
    }
    for (int i = 0; i < 30; i++)
        if (student[i] == 0) printf("%d\n", i + 1);
}