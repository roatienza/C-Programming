#include <stdio.h>
#include <unistd.h>

int main()
{
	int a = 0;
	scanf("%d",&a);
	while( a>0 ){
		printf("%d\n",a);
		a = a - 1;
		sleep(1);
	}
	return 0;
}
