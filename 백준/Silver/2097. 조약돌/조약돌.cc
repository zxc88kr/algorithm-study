#include <cstdio>

int main()
{
	int N;
	scanf("%d", &N);

	int width = 1;
	int height = 1;
	while (N > (width + 1) * (height + 1))
	{
		if (width < height) width++;
		else height++;
	}
	printf("%d", (width + height) * 2);
}