#include <cstdio>
#include <cmath>

int main()
{
    int length;
    scanf("%d", &length);

    int sum = 0;
    int max = -4001;
    int min = 4001;
    int result[8001] = { 0, };
    for (int i = 0; i < length; i++)
    {
        int temp;
        scanf("%d", &temp);

        sum += temp;
        if (temp > max) max = temp;
        if (temp < min) min = temp;
        
        result[temp + 4000]++;
    }
    printf("%d\n", (int)round((float)sum / length));

    int median;
    int mode; int mode_max = 0; bool flag = true;
    int count = length;
    for (int i = 0; i <= 8000; i++)
    {
        int number = i - 4000;
        count -= result[i];

        if (count <= length / 2 &&
            count + result[i] > length / 2) median = number;

        if (result[i] > mode_max)
        {
            mode_max = result[i];
            mode = number;
            flag = true;
        }
        else if (flag && result[i] == mode_max)
        {
            mode = number;
            flag = false;
        }

        if (count == 0) break;
    }
    printf("%d\n%d\n%d", median, mode, max - min);
}