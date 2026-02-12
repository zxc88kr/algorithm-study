#include <cstdio>

int main()
{
    int test;
    scanf("%d", &test);
    
    int arr[test];
    for (int i = 0; i < test; i++)
        scanf("%d", &arr[i]);
    
    for (int i = 0; i < test; i++)
        for (int j = 0; j < test - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    
    for (int i = 0; i < test; i++)
        printf("%d\n", arr[i]);
}