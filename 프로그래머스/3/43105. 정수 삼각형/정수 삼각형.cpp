#include <vector>
#include <algorithm>

int solution(std::vector<std::vector<int>> triangle)
{
    int height = triangle.size();
    
    for (int i = height - 2; i >= 0; i--)
        for (int j = 0; j <= i; j++)
            triangle[i][j] += std::max(triangle[i + 1][j], triangle[i + 1][j + 1]);
    
    return triangle[0][0];
}