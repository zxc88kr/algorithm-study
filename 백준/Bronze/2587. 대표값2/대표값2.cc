#include <cstdio>

int main()
{
    int arr[5];
    int sum = 0;
    int average;
    int median;
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 4 - i; j++)
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    
    average = sum / 5;
    median = arr[2];
    
    printf("%d\n%d", average, median);
}