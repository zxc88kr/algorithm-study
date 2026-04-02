#include <iostream>
#include <vector>
#include <climits>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m, b;
    std::cin >> n >> m >> b;

    std::vector<int> height_count(257, 0);

    int height;
    for (int i = 0; i < n * m; i++)
    {
        std::cin >> height;
        height_count[height]++;
    }

    int time = INT_MAX;
    int max_height = 0;

    for (int target = 0; target <= 256; target++)
    {
        int need = 0;
        int remove = 0;

        for (int h = 0; h <= 256; h++)
        {
            if (h < target) need += (target - h) * height_count[h];
            else remove += (h - target) * height_count[h];
        }

        if (need <= remove + b)
        {
            int cur_time = need + remove * 2;

            if (cur_time <= time)
            {
                time = cur_time;
                max_height = target;
            }
        }
    }

    std::cout << time << ' ' << max_height;
}