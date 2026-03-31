#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> grid(20);

    for (int i = 0; i < 20; i++)
        std::cin >> grid[i];

    int rank = 0;
    bool flag = true;
    
    for (int i = 19; i >= 11; i--)
    {
        std::string test = "##########";
        test[19 - i] = '.';

        if (grid[i] == test && grid[i - 1][19 - i] == '#') rank++;
        else
        {
            flag = false;
            break;
        }
    }
    
    if (flag)
    {
        for (int i = 10; i >= 1; i--)
        {
            std::string test = "##########";
            test[i - 1] = '.';

            if (grid[i] == test && grid[i - 1][i - 1] == '#') rank++;
            else break;
        }
    }
    
    std::string tier[20] = { "X", "9", "8", "7", "6", "5", "4", "3", "2", "1"
                           , "S1", "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9", "GM" };
    
    std::cout << tier[rank];
}