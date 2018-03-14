#include <stdio.h>

int main()
{
	unsigned int x = 0;
    unsigned int d = 0;
    unsigned int c = 0;
    unsigned int b = 0;
    unsigned int a = 0;

    scanf("%x %x %x %x",&a, &b, &c, &d);
    x = (a<<24) | (b<<16) | (c<<8) | d;
    printf("0x%x\n", x);

	return 0;
}
