#include <iostream>
#include <string>

int main()
{
    std::string subject, rank;
    double totalRank, totalGrade, grade;
    
    totalRank = 0.0;
    totalGrade = 0.0;
    for (int i = 0; i < 20; i++)
    {
        std::cin >> subject >> grade >> rank;
        if (rank == "A+") totalRank += grade * 4.5;
        else if (rank == "A0") totalRank += grade * 4.0;
        else if (rank == "B+") totalRank += grade * 3.5;
        else if (rank == "B0") totalRank += grade * 3.0;
        else if (rank == "C+") totalRank += grade * 2.5;
        else if (rank == "C0") totalRank += grade * 2.0;
        else if (rank == "D+") totalRank += grade * 1.5;
        else if (rank == "D0") totalRank += grade * 1.0;
        else if (rank == "F") totalRank += grade * 0.0;
        else continue;
        totalGrade += grade;
    }
    std::cout << totalRank / totalGrade;
}