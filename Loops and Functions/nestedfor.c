#include <stdio.h>
#include <math.h>

int main()
{
	int a = 1;
	int b = 1;
	for(;a<=9;a++){
		for(b=1;b<=9;b++){
			printf("%d\t",a*b);
		}
		printf("\n");
	}
	return 0;
}
