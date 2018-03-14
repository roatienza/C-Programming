#include <stdio.h>

int main()
{
	unsigned int x = 0xAABBCCDD;
    unsigned int d = x & 0xff;
    unsigned int c = (x & 0xff00) >> 8;
    unsigned int b = (x & 0xff0000) >> 16;
    unsigned int a = (x & 0xff000000) >> 24;

	printf("x = %x\n",x);
	printf("d = %x\n",d);
	printf("c = %x\n",c);
	printf("b = %x\n",b);
	printf("a = %x\n",a);

	return 0;
}
