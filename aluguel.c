#include <stdio.h>

int main()
{
	double dias, km;
	scanf("%lf%lf", &dias, &km);
	printf("%.2lf\n", (30* dias + 0.01*km)*.9);
	return 0;
}