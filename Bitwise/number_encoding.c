#include <stdio.h>

int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	int e = 0;
	scanf("%d%d%d",&y,&m,&d);
	e = y*10000 + m*100 + d;
	printf("concat(%d,%d,%d)=%d\n",y,m,d,e);

	return 0;
}
