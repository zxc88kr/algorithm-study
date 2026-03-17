#include <iostream>

int N, K;
int save, result;

void merge_sort(int* A, int p, int r);
void merge(int* A, int p, int q, int r);

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    std::cin >> N >> K;
    int A[N + 1];
    for (int i = 1; i <= N; i++)
        std::cin >> A[i];

    merge_sort(A, 1, N);
    if (save < K) std::cout << "-1";
    else          std::cout << result;
}

void merge_sort(int* A, int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

void merge(int* A, int p, int q, int r)
{
    int tmp[r + 1];
    int i = p, j = q + 1, t = 1;
    while (i <= q && j <= r)
    {
        if (A[i] <= A[j]) tmp[t++] = A[i++];
        else              tmp[t++] = A[j++];
    }
    while (i <= q) tmp[t++] = A[i++];
    while (j <= r) tmp[t++] = A[j++];

    i = p, t = 1;
    while (i <= r)
    {
        A[i++] = tmp[t++];
        save++;
        if (save == K)
        {
            result = A[i - 1];
            break;
        }
    }
}