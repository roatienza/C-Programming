#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0x12345678;
	int *pi = &i;
	*pi = 0;
	printf("i = %d\n", i);
	printf("pi = %p\n", pi);
	return 0;
}
