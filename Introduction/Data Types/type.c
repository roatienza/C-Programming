#include <stdio.h>
#include <math.h>

int main()
{
	double a = M_PI;
	double b = M_PI;
	int i = 3;
	int j = a/i;
	printf("%lf + %lf = %lf \n",a,b,a+b);
	printf("%d + %lf = %lf \n",1,b,1+b);
	printf("%lf / %d = %d \n",a,i,j);
	printf("%d / %d = %lf \n",3,2,(double)3/2);
	return 0;
}
