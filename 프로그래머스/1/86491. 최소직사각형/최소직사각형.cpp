#include <vector>

int solution(std::vector<std::vector<int>> sizes)
{
    int width = 0;
    int height = 0;
    
    for (auto& size : sizes)
    {
        width = std::max(width, std::max(size[0], size[1]));
        height = std::max(height, std::min(size[0], size[1]));
    }
    
    return width * height;
}