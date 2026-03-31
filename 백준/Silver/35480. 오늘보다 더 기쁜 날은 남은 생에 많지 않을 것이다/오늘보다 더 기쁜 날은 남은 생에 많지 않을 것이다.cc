#include <iostream>

int month_to_int[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int day_to_int(int year, int month, int day)
{
    int num = 0;
    
    num += year * 365;
    for (int i = 1; i < month; i++)
        num += month_to_int[i];
    num += day;
    
    return num;
}

int main()
{
    int y0, m0, d0;
    int y1, m1, d1;
    
    std::cin >> y0 >> m0 >> d0;
    std::cin >> y1 >> m1 >> d1;
    
    int start = day_to_int(y0, m0, d0);
    int end = day_to_int(y1, m1, d1);
    
    int n;
    std::cin >> n;
    
    int year, month, day;
    std::cin >> year >> month >> day;
    
    int happy = y0 - year;
    int count = 0;
    
    int base = day_to_int(year, month, day);
    for (int i = year; i <= y1; i++)
    {
        if (base >= start && base <= end && i - year > happy) count++;
        base += 365;
    }
    
    while (n-- > 1)
    {
        std::cin >> year >> month >> day;
        
        int base = day_to_int(year, month, day);
        for (int i = year; i <= y1; i++)
        {
            if (base >= start && base <= end && i - year > happy) count++;
            base += 365;
        }
    }
    std::cout << count;
}