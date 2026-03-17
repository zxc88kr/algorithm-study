#include <cstdio>
#include <algorithm>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int basket[N + 1];
    for (int i = 1; i <= N; i++)
        basket[i] = i;

    for (int loop = 0; loop < M; loop++)
    {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);
        std::rotate(basket + i, basket + k, basket + j + 1);
    }

    for (int i = 1; i <= N; i++)
        printf("%d ", basket[i]);
}