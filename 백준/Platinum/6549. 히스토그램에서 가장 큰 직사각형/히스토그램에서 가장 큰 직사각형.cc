#include <iostream>
#include <vector>
#include <stack>

long long area(std::vector<long long>& v, int n)
{
    std::stack<long long> st_height;
    std::stack<int> st_idx;

    st_height.push(0);
    st_idx.push(0);

    long long max_area = 0;

    for (int i = 1; i <= n + 1; i++)
    {
        while (st_height.size() > 1 && st_height.top() > v[i])
        {
            long long height = st_height.top();

            st_height.pop();
            st_idx.pop();

            long long width = i - st_idx.top() - 1;
            long long cur_area = height * width;

            if (cur_area > max_area) max_area = cur_area;
        }

        st_height.push(v[i]);
        st_idx.push(i);
    }

    return max_area;
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    while (true)
    {
        int n;
        std::cin >> n;

        if (n == 0) break;

        std::vector<long long> histogram(n + 2, 0);
        for (int i = 1; i <= n; i++)
            std::cin >> histogram[i];

        std::cout << area(histogram, n) << '\n';
    }
}