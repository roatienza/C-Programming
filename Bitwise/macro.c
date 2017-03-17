#include <stdio.h>

#define max(x,y)  x > y ? x : y

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d",&a,&b);
	printf("max(%d,%d) = %d\n",a,b,max(a,b));
	return 0;
}

