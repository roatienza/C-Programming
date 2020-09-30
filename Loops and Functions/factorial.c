#include <stdio.h>

int factorial(int n)
{
	if(n==1) return 1;
	else
	return n*factorial(n-1);
}

int main()
{
	int a;
	scanf("%d",&a);
	printf("The factorial of %d is %d\n",a,factorial(a));
	return 0;
}
