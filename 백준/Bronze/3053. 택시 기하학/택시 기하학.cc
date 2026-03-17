#include <cstdio>
#define PI 3.141592653589793

int main()
{
	int R;
	scanf("%d", &R);
    
	double general_area = R * R * (double)PI;
	double euclid_area = R * R * (double)2;
	printf("%.6lf\n%.6lf", general_area, euclid_area);
}