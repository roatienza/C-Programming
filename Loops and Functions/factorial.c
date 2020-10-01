#include <stdio.h>

int factorial(int n)
{
	int i=n-1;
	while(i>0)
	{
        n=n*i;
        i--;
	}
	return n;
}
int main()
{
	int a;
	scanf("%d",&a);
	printf("The factorial of %d is %d\n",a,factorial(a));
	return 0;
}
