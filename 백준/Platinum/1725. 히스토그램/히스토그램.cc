#include <cstdio>
#include <vector>
#include <stack>

long long getMaxRectangleArea(std::vector<int>& histogram, int n)
{
	std::stack<int> stackHeight;
	std::stack<int> stackIndex;

	stackHeight.push(0);
	stackIndex.push(0);

	long long maxRectangleArea = 0;

	for (int i = 1; i <= n + 1; i++)
	{
		while (stackHeight.size() > 1 && stackHeight.top() > histogram[i])
		{
			int targetHistogramHeight = stackHeight.top();

			stackHeight.pop();
			stackIndex.pop();

			int targetHistogramIndex = stackIndex.top();

			long long height = targetHistogramHeight;
			long long width = i - targetHistogramIndex - 1;
			long long area = height * width;

			maxRectangleArea = (area > maxRectangleArea ? area : maxRectangleArea);
		}
		stackHeight.push(histogram[i]);
		stackIndex.push(i);
	}
	return maxRectangleArea;
}

int main()
{

	int n;
	scanf("%d", &n);

	std::vector<int> histogram(n + 2);
	for (int i = 1; i <= n; i++)
		scanf("%d", &histogram[i]);

	histogram[n + 1] = 0;

	long long maxRectangleArea = getMaxRectangleArea(histogram, n);
	printf("%lld\n", maxRectangleArea);

	return 0;
}