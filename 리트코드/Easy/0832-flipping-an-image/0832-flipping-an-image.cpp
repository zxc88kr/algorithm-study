#include <vector>

class Solution
{
public:
    std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& image)
    {
        int len = image[0].size();
        for (auto& row : image)
            for (int i = 0; i < (len + 1) / 2; i++)
            {
                int temp = row[i] ^ 1;
                row[i] = row[len - 1 - i] ^ 1;
                row[len - 1 - i] = temp;
            }
        return image;
    }
};