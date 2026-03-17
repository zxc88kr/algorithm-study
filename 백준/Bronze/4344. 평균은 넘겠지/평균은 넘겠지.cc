#include <cstdio>

int main()
{
    int cluster;
    scanf("%d", &cluster);
    
    for (int i = 0; i < cluster; i++)
    {
        int total_number;
        scanf("%d", &total_number);
        
        int student[total_number];
        int sum = 0;
        
        for (int j = 0; j < total_number; j++)
        {
            scanf("%d", &student[j]);
            sum += student[j];
        }
        
        float average = (float)sum / total_number;
        int top_number = 0;
        
        for (int j = 0; j < total_number; j++)
            if (student[j] > average) top_number++;
        printf("%.3f%%\n", (float)top_number / total_number * 100);        
    }
}