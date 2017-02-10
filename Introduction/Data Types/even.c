#include <stdio.h>

int main()
{
	char c = 0;
	while(c<100){
		if( (c%2)==0 ){
			printf("%d, ",c);
		}
		c++;
	}
	printf("\n");
	return 0;
}
