#include <iostream>
#include <vector>
#include <stack>

long long area(std::vector<int>& v, int n)
{
    std::stack<int> st_height;
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
			long long area = height * width;

            if (area > max_area) max_area = area;
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

	int n;
    std::cin >> n;

	std::vector<int> histogram(n + 2);
	for (int i = 1; i <= n; i++)
        std::cin >> histogram[i];
	histogram[n + 1] = 0;
    
    std::cout << area(histogram, n);
}