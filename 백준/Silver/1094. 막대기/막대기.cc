#include <cstdio>

int main()
{
	int x;
	scanf("%d", &x);

	int result = 0;
	while (x > 0)
	{
		result += (x % 2);
		x /= 2;
	}
	printf("%d", result);
}