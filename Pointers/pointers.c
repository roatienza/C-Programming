#include <stdio.h>
#include <string.h>

int main()
{
	int i = 0x12345678;
	int *pi = &i;
	printf("Before: i = %d\n", i);
	printf("Before: pi = %p\n", pi);
	*pi = 0;
	printf("After: i = %d\n", i);
	printf("After: pi = %p\n", pi);
	return 0;
}
