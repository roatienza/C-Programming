#include <stdio.h>
#include <math.h>

#define TWO_PI	M_PI*2.0
#define max(a,b) a>b?a:b

int main()
{
	int a = 12;
	int b = -2;
	printf("max(%d,%d)=%d\n",a,b,max(a,b));
	printf("2*pi = %lf\n", TWO_PI);
	return 0;
}
