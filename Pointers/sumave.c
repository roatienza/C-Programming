#include <stdio.h>

void sum_ave(int a, int b, int* sum, double *ave)
{
	*sum = a + b;
	*ave = (a+b)*0.5;
}

int main()
{
	int a;
	int b;
	int sum;
	double ave;
	scanf("%d %d",&a, &b);
	sum_ave(a,b,&sum,&ave); 
	printf("Sum(%d,%d) = %d\n",a,b,sum);
	printf("Ave(%d,%d) = %lf\n",a,b,ave);
	return 0;
}
