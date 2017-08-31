#include <stdio.h>

int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	scanf("%d",&e);
	f = e;
	d = e%100;
	e = e/100;
	m = e%100;
	y = e/100;
	printf("decode(%d)=(%d,%d,%d)\n",f,y,m,d);

	return 0;
}
