#include <stdio.h>

int main()
{
	double meter = 0.0;
	double km = 0.0; 
	scanf("%lf",&meter);
	km = meter/1000.0;
	printf("%lf meters = %lf km\n",meter,km);
	return 0;
}
