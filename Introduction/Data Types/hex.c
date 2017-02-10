#include <stdio.h>

int main()
{
	char c = 0xf;
	while(c>=0){
		printf("%x",c);
		c--;
	}
	printf("\n");
	return 0;
}
