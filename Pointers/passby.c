#include <stdio.h>

void inc1(int byval)
{
	byval++;
}

void inc2(int *byref)
{
	(*byref)++;
}

int main()
{
	int a = 0;
	int b = 0;
	inc1(a);
	inc2(&b);
	printf("a= %d\n",a);
	printf("b= %d\n",b);
	return 0;
}
