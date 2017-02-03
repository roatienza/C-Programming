#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int max = 0;
	scanf("%d %d %d",&a,&b,&c);
	if( a>b ){
		max = a;
	}else{
		max = b;
	}
	if( c>max ){
		max = c;
	}
	printf("max(%d,%d,%d) = %d\n",a,b,c,max);
	return 0;
}
