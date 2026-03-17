#include <cstdio>

int solve(int page[], int n)
{
    int inkSum = 0;
    int existed = 3;
    
    for (int i = 0; i < n; i++)
    {
        if (page[i] == 0)
        {
            inkSum += 2;
            if (existed >= 3) inkSum += 5;
            else              inkSum += existed * 2;
            existed = 0;
        }
        else existed++;
    }
    return inkSum;
}

int main()
{
    int n, m;
    int* page;
    int* scattered;

    scanf("%d %d", &n, &m);
    page = new int[n];
    scattered = new int[m];
    for (int i = 0; i < m; i++)
        scanf("%d", &scattered[i]);
    
    for (int i = 0; i < m; i++)
        page[scattered[i] - 1]++;

    int ink = solve(page, n);
    printf("%d\n", ink);

    delete[] page;
    delete[] scattered;
    return 0;
}