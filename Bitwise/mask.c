#include <stdio.h>

int main()
{
	unsigned int a = 0;
	unsigned int b = 0;
	
	scanf("%x",&a);
	scanf("%x",&b);

	printf("%x & %x = %x\n",a,b,a&b);

	return 0;
}
